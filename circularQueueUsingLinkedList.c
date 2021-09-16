#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int x){
    
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=x;
    newNode->next=NULL;
    printf("%d is added in queue\n",x);
    if (front==NULL && rear==NULL)
    {
       front=rear=newNode; 
       rear->next=front;
    }
    else
    {
        rear->next=newNode;
        rear=newNode;
        rear->next=front;
        
    }
    
    
    
}
void dequeue(){
    if (front==NULL && rear==NULL)
    {
        printf("There is no element in queue.Operation failed\n");
    }
    else if (front==rear)
    {
        printf("%d is deleted from stack\n",front->data);
        struct node* temp=front;
        front=rear=NULL;
        free(temp);
    }
    
    else
    {
        printf("%d is deleted from stack\n",front->data);
        struct node* temp=front;
        front=front->next;
        rear->next=front;
        free(temp);    
    }
}
void display(){
    if (front==NULL && rear==NULL)
    {
        printf("operation failed due to underflow condition\n");
    }
    else
    {
        struct node* temp;
        temp=front;
        printf("Element in queue are:");
        while (temp!=rear)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
    
     
}
void peek(){
    if (front==NULL && rear==NULL)
    {
        printf("operation failed due to underflow condition\n");
    }
    else
    {
        printf("The element in front of queue is %d\n",front->data);
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
    enqueue(7);
    // dequeue();
    // dequeue();
    display();
    
    return 0;
}