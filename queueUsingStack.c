#include<stdio.h>
#define N 10
int stack1[N];
int stack2[N];
int top1=-1;
int top2=-1;
int count;
    
void push1(int x){
        top1++;
        stack1[top1]=x; 
}

void push2(int x){
    top2++;
    stack2[top2]=x;
   
}

int pop1(){    
        return stack1[top1--];
}

int pop2(){
    return stack2[top2--];  
}
int peep(){
    if (top1==-1)
    {
        printf("Array does not have any element\n");
    }
    else
    {
        printf("%d is the top1 element\n",stack1[0]);
    }
    
}
void display(){
    printf("The element in queue are:");
    for (int i = 0; i <= top1; i++)
    {
        printf("%d ",stack1[i]);
    }
    printf("\n");
}
void enqueue(int x){
    if (top1==N-1)
    {
        printf("Element can't be added due to overflow condition\n");
    }
    else
    {
        push1(x);
        count++; 
        printf("%d is added in queue\n",x);
    }
    
    
   

}
void dequeue(){
    if (top1==-1)
    {
        printf("Element can't be added due to underflow condition\n");
    }
    else
    {
        int a;
        for (int i = 0; i < count; i++)
        {
            a=pop1();
            push2(a); 
        }
        int b=pop2();
        printf("%d is deleted from queue\n",b);
        count--;
        for (int i = 0; i < count; i++)
        {
            a=pop2();
            push1(a);  
        }   
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
   peep();                                                                                                            
   dequeue();
   dequeue();
   enqueue(99);
   enqueue(98);

   display();
    

    return 0;
}