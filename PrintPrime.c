#include<stdio.h>  // code worked properly 
int main(int argc, char const *argv[])
{           // code of prime no between 2 number
    int n1,n2,flag;
    printf("Enter the two number");
    scanf("%d %d",&n1,&n2);
    printf("Prime Number between two number are: ");
    while (n1<n2)
    {
        flag=1;
       for (int j = 2; j <= n1/2; j++)
       {
           if (n1%j==0)
             {
                flag=0;
                //here break is not used but it still has no effect
             }
             
                 
       }
       if (flag==1)
       {
           printf(" %d",n1);
       }
        n1++;
    }

    
    return 0;
}
