#include<stdio.h>
#define N 10
int queue[N];
int count,front=-1,rear=-1;
void enqueueFront(int x){
    if ((rear+1)%N==front)
    {
        printf("Deque is full.Operation failed due to overflow condition\n");
    
    }
    else if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[front]=x;
        printf("%d is added in the deque\n",x);
    }
    else
    {
        front=(front+4)%N;
        queue[front]=x;
        printf("%d is added in the deque\n",x);
    }
    
}
void enqueueRear(int x){
    if ((rear+1)%N==front)
    {
        printf("Deque is full.Operation failed due to overflow condition\n");
    
    }
    else if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
        printf("%d is added in the deque\n",x);
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
        printf("%d is added in the deque\n",x);
    }
}
void dequeueFront(){
   if(front==-1 && rear==-1){
       printf("Element can't be deleted due to underflow condition\n");
   } 
   else if (front==rear)
   {
       printf("%d is deleted from the deque\n",queue[front]);
       front=rear=-1;
   }
   else
   {
       printf("%d is deleted from the deque\n",queue[front]);
       front=(front+1)%N; 
   }
   
   
}
void dequeueRear(){
    if(front==-1 && rear==-1){
       printf("Element can't be deleted due to underflow condition\n");
   } 
   else if (front==rear)
   {
       printf("%d is deleted from the deque\n",queue[rear]);
       front=rear=-1;
   }
   else
   {
       printf("%d is deleted from the deque\n",queue[rear]);
       rear=(rear+4)%N; 
   }
}
void display(){
    if (front==-1 && rear==-1)
        {
            printf("Queue is empty.Operation failed   due to Underflow condition\n");
        
        }
    else
    {
        int i=front;
        printf("Element in queue are:");
        do
        {
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }while (i!=front);
        printf("\n");
    }
    
}

int main()
{
    
    enqueueRear(1);
    enqueueRear(2);
    enqueueRear(3);
    enqueueRear(4);
    enqueueRear(5);
    enqueueRear(1);
    enqueueRear(2);
    enqueueRear(3);
    enqueueRear(4);
    enqueueRear(5);
    enqueueRear(5);
    display();

    return 0;
}