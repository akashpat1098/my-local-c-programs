
            //code for checking  a number is armstrong or not
            //and also for printing armstrong number 
#include<stdio.h>  // code worked properly
int main(int argc, char const *argv[])
{   /*
       code for checking Armstrong Number   

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
    */
    // code for Printing Armstrong Number within three digit Number
    int a,b;

    printf("Enter a range of three digit number\n");
    scanf("%d%d",&a,&b);
    for (int i = a; i <= b; i++)
    {
        int rem,temp;
        int sum=0;   //container should be put into the for loop
        temp=i;
        while (temp!=0)
        {
            rem=temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10; 
        }
        if (sum==i)
        {
            printf("%d ",i);
        }
          
    }
         
    return 0;
}
