#include <stdio.h>  //code worked properly
int main(int argc, char const *argv[])
{           // code of determining a number is prime or not
    int num, flag = 1;
    printf("Enter the Number:");
    scanf("%d", &num);
    
    if (num==1)
    {
        printf("1 is neither prime nor composite!");
    }
    
    for (int i = 2; i < num; i++) // num/2 is the main thing but it can be replace by num-1
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is not prime number", num);
    }
    else if (num<0)
    {
        printf("enter a positive number");
    }
    
    else
    {
        printf("%d is prime number", num);
    }

    return 0;
}
