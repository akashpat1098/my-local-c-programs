#include<stdio.h>
int main()
{   int n=3,k=3,a=0,o=0,x=0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i+1; j <= n; j++) 
        {
           
            if (((i&j)<k) && (a<(i&j)))
            {
                a=i&j;
            }
            if (((i|j)<k) && (o<(i|j)))
            {
                o=i|j;
            }
            if (((i^j)<k) && (x<(i^j)))
            {
                x=i^j;
            }
            

        }
        
    }
    printf("%d\n%d\n%d\n",a,o,x);
    
    return 0;
}