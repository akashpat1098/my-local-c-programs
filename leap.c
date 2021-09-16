#include<stdio.h>  // code worked properly
int main(int argc, char const *argv[])
{    
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    
    if (year%400==0 || year%4==0 && year%100!=0)  //&& has greater prescendence than ||
    {
        printf("Entered year is leap Year");
    }
    else{
        printf("Entered year is not a leap Year");
    }
    
    return 0;
}














