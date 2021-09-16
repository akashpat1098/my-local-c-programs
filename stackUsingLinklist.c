#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node* next;
};
struct node *top=NULL;
int count=0;
void push(int x){
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=x;
    printf("%d is added in stack\n",newNode->data);
    newNode->next=top;
    top=newNode;  
    count++;
}
void pop(){
    if (top==NULL)
    {
        printf("Stack is empty.Failed to delete element\n");
    }
    else
    {
        struct node* temp=top;
        printf("%d is deleted from stack\n",top->data);
        top=top->next;
        free(temp);
        count--;
    }
    
    
}
void peep(){
    if (top==NULL)
        {
            printf("Stack is empty.Failed to display the top element\n");
        }
        else
        {
            printf("Element at top of Stack is %d\n",top->data);
        }
        
}
void display(){
    if (top==NULL)
        {
            printf("Stack is empty.Failed to display element\n");
        }
    else
    {
        struct node* temp;
        temp=top;
        printf("The element in stack are:");
        while (temp!=NULL)
            {
                printf("%d ",temp->data); 
                temp=temp->next;
            }
                printf("\n");
        
    }
    
    
    
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    peep();
    pop();
    pop();
    peep();
    display();

    
    return 0;
}