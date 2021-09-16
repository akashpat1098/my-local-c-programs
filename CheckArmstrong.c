
            // whether a number is armstrong or not 
#include<stdio.h>  // code worked properly
int main(int argc, char const *argv[])
{
    int num,value=0,org,U;
    printf("Enter the Number:");
    scanf("%d",&num);//asking for a number
    org=num;
    while (num>0)
    {
        U=num%10;
        num=num/10;
        value=value+(U*U*U);  // algorithm for armstrong number
    }
    if (org==value)
    {
        printf("Entered Value is Armstrong");
    }                                               // checking for armstrong
    else            
    {
         printf("Entered Value is not Armstrong");    
            
    }
         
    return 0;
}
