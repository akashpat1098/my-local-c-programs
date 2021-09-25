#include<stdio.h>
int main() 
{

    int n,len,min1,min2,min;
    printf("hhhhhhh\n");
    scanf("%d", &n);
    len=2*n-1;
  	// Complete the code to print the pattern.
      for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) {
        int min1=i<=len-i-1?i:len-i-1;
            min2=j<=len-j-1?j:len-j-1;
            min=min1<=min2?min1:min2;
            printf("%d ",n-min);     
        }
        printf("\n");
      }
    return 0;
}