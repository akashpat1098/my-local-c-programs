#include <stdio.h>
int fib_recursively(int);
int main(int argc, char const *argv[])
{
    int n, a = 0, b = 1;
    printf("Enter the Number:");
    scanf("%d", &n);

    printf("The fibonacci series iteratively is:");
    for (int z = 0; z < n ; z++)
    {
        printf("%d  ", a);
        b = a + b;
        a = b - a;
    }
    printf("\n");
    printf("The fibonacci series recursively is:");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d  ", fib_recursively(i));
    }
    return 0;
}
int fib_recursively(int i)
{
    if (i == 0 || i == 1)
    {
        return i;
    }
    else
    {
        return (fib_recursively(i - 1) + fib_recursively(i - 2));
    }
}
