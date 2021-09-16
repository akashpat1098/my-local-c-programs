#include<stdio.h>  //code works properly
void main(int argc, char const *argv[])
{   int num,fact=1;
    printf("Enter the Number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is = %d ",num,fact);
    

}
