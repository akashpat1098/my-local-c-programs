#include <stdio.h>
void checkRepeatation(int num);
int main()
{
    unsigned long int num;
    printf("Enter the Number to find the repeated integer in number\n");
    scanf("%d", &num);
    checkRepeatation(num);

    return 0;
}
void checkRepeatation(int num)
{
    int frequency[10], ld, flag = 0, temp;
    for (int i = 0; i < 10; i++)
    {
        frequency[i] = 0;
    }
    while (num > 0)
    {
        ld = num % 10;
        frequency[ld] += 1;
        num = num / 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (frequency[i] > 1)
        {
            flag = 1;
            printf("%d is repeated %d times\n", i, frequency[i]);
        }
       
        
    }
    
}
