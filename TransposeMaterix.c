#include<stdio.h>
int main()
{
    int r,c,i,j,A[10][10],T[10][10];
    printf("Enter number of rows and column:");
    scanf("%d %d",&r,&c);
    
    printf("Enter elements:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           scanf("%d",&A[i][j]);
        }
        
    }
    
    printf("Matrix A is :\n");

     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
           T[j][i]=A[i][j];
        }
    }

    printf("Transpose is:\n");

     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }

return 0;

}