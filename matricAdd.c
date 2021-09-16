
        //bhaut sare doubt

#include <stdio.h>
void inputMatrix(int m, int n, int *matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
}
void printMatrix(int m, int n, int *matrix[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void printAddMatrix(int m, int n, int *A[m][n], int *B[m][n])
{
    int sum[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[m][n] = A[m][n] + B[m][n];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", sum[m][n]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n;
    printf("Enter the Number of rows and columns of Matrix A and B\n");
    scanf("%d %d", &m, &n);
    int a[m][n], b[m][n];
    printf("Enter the value of matrix A\n");
    inputMatrix(m, n, a);
    printf("Enter the value of matrix B\n");
    inputMatrix(m, n, b);
    printf("Printing the value of matrix A\n");
    printMatrix(m, n, a);
    printf("Printing the value of matrix B\n");
    printMatrix(m, n, b);
    printf("Addition of  Matrix A and B is \n");
    printAddMatrix(m,n,a,b);

    

    return 0;
}
