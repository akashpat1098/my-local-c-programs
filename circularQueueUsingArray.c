#include<stdio.h>
#define N 5
int queue[N];
int count,front=-1,rear=-1;
void enqueue(int x){
    if ((rear+1)%N==front)
    {
        printf("Queue is full.Operation failed due to overflow condition\n");
    
    }
    else if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
        printf("%d is added in the queue\n",x);
    }
    
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
        printf("%d is added in the queue\n",x);
    }
}
void dequeue(){
    if (front==-1 && rear==-1)
        {
            printf("Queue is empty.Operation failed   due to Underflow condition\n");
        
        }
    else if (front==rear)
    {
       printf("%d is removed from queue\n",queue[front]);
       front=rear=-1; 

    }
    
    else
    {
        printf("%d is removed from queue\n",queue[front]);
        front=(front+1)%N; 
    }
    

}
void peek(){
    if (front==-1 && rear==-1)
        {
            printf("Queue is empty.Operation failed   due to Underflow condition\n");
        
        }
    else
    {
        printf("The element at front of Queue is %d\n",queue[front]);
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
        while (i!=rear)
        {
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
        
        printf("\n");
    }
    
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    dequeue();
    dequeue();
    dequeue();
    enqueue(99);
    display();
    return 0;
}