#include<stdio.h>
#define N 50
int stack[N]; //here,stack is created by array
int top=-1;
    
void push(int x){
    if (top==N-1)
    {
        printf("You can't add more Element due to Overflow condition\n");
        
    }
    else{
        top++;
        stack[top]=x;
        printf("%d is added in stack\n",x);
    }   
}
void pop(){
    if (top==-1)
    {
        printf("You can't remove Element due to Underflow condition\n");       
    }
    else{
        printf("%d is removed from the stack\n",stack[top]);
        top--;

    }
    
}
int peep(){
    if (top==-1)
    {
        printf("Array does not have any element\n");
    }
    else
    {
        printf("%d is the top element\n",stack[top]);
    }
    
}
void display(){
    printf("The element in stack are:");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ",stack[i]);
    }
    
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(5);
    push(5);
    pop();
    pop();
    pop();
    peep();
    display();
    
    

    return 0;
}