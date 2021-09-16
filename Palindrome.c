#include<stdio.h>
int main()
 { 
     //code for checking a number is palindrome or not
     
//     int num,n,rem,rev=0;
//     printf("Enter the Number");
//     scanf("%d",&num);
//     n=num;
//     while (n!=0)
// {
//     rem=n%10;
//     rev=rev*10+rem;
//     n=n/10;  
// }
// if (rev==num)
// {
//     printf("Palindrome Number");

// }
// else{
//     printf("Not Palindrome Number");
// }

    //code for printing all palindrome number between two number
    int a,b,n,rem,r;
    printf("Enter the range of Number\n");
    scanf("%d%d",&a,&b);
    for (int i = a; i <=b; i++)
    {   
        int rev=0; //container should be put into the for loop
        n=i;

        while (n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;  
        }
        if (rev==i)
        {
            printf("%d ",i);

        }

    }
        
       

   
return 0;
}