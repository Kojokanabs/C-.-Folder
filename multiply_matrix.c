#include<stdio.h>
int main(void)
{
    int a[3][3], b[3][2], c[3][2];
    int i, j, k, m, n, p, q, sum = 0;

    printf("Enter number of rows and columns for first matrix:\n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of first matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter number of rows and columns for second matrix:\n");
    scanf("%d %d", &p, &q);
    printf("Enter the elements of second matrix:\n");
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
    }
    printf("First matrix is:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {        
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is:\n");
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    if (n!= q)
        printf("Can't print");
    else
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            sum = 0;
            for(k = 0; k < 3; k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
        }
            //printf("\n");
    }
    printf("Multiplication of matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
                
    }
    return (0);
}