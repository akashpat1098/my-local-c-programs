#include<stdio.h>
//stack is created here
#define N 10
char stack[N]; 
int top=-1; 
int flag=0;
void push(char* x){
    if (top==N-1)
    {
        // printf("You can't add more Element due to Overflow condition\n");
        
    }
    else{
        top++;
        stack[top]=*x;
        // printf("%d is added in stack\n",*x);
    }   
}
int pop(){
    if (top==-1)
    {
        // printf("You can't remove Element due to Underflow condition\n");
        return 1;       
    }
    // if(top!=1)
    else{
        // printf("%d is removed from the stack\n",stack[top]);
        top--;
        return 0;
    }
    
}
// i < sizeof(arr)/sizeof(char)
void checkParenthsisBalancing(char * arr){ //(((())))
    for (int i =0 ;arr[i]!='\0'; i++)
    {
        if (*(arr + i)=='(')
        {
            
            push(arr + i);
        }
        else if(*(arr + i) == ')')
        {
                
            flag=pop();
            if (flag==1)
            {
                
                break;
            }
            

        }  
    }
    if (top!=-1 || flag ==1)
    {
        printf("Parenthesis is not Balanced\n");
    }
    else if (top==-1)
    {
        printf("Parenthesis is  Balanced\n");
        
    }
    
    
    
}
int main()
{
    char exps[]="4()()()())";
    checkParenthsisBalancing(exps);


    return 0;
}