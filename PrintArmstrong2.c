// printing all armstrong number betwwen 1 to 1000

#include <stdio.h> //code  work properly
int main(int argc, char const *argv[])
{
    int org, lst, ans, num = 1;
    for (int i = 1; i <= 500; i++)  //loops variable can be used but cannot be changed in code 
    {
        ans = 0;
        org = num;
        while (num > 0)
        {
            lst = num % 10;
            num = num / 10; // here num always get changed to 0
            ans = ans + (lst * lst * lst);
        }
        if (ans == org)
        {
            printf("%d ", org);
        }
        num = i + 1; // num should increase according to i
    }

    return 0;
}
