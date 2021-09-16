#include<stdio.h>
int main()
{
    int i,j,m,n,p,q,k,A[10][10],B[10][10],C[10][10],sum;

    printf("Enter number of rows and columns of matrix A:");
    scanf("%d %d",&m,&n);

     printf("Enter number of rows and columns of matrix B:");
    scanf("%d %d",&p,&q);
    
    if (n!=p)
    {
        printf("Matrices can't be multiplicated !!");
    }

 else
 {
       printf("Enter elements of Matrix A:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }

    printf("Enter elements of Matrix B:\n");
    for ( i = 0; i < p; i++)
    {
        for ( j = 0; j < q; j++)
        {
            scanf("%d",&B[i][j]);
        }

    }

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < q; j++)
        {   sum=0;
            for(k=0;k<p;k++)
            {
              sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }

    printf("Multiplication of Mat A and Mat B is:\n");
    
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < q; j++)
        {
            printf("%d\t",C[i][j]);
        }
       printf("\n");
    }

 }
    
    
   
    return 0;
}