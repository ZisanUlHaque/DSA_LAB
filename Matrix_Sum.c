#include<stdio.h>
int main()
{
    int i,j,row,col;
    int a[100][100], b[100][100], sum[100][100];

    printf("Enter the number of rows: ");
    scanf("%d",&row);

    printf("Enter the number of cols: ");
    scanf("%d",&col);

    printf("Enter the First matrix elements: ");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Enter the Second matrix elements: ");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    
    for (i = 0; i < row; i++) 
    {
        for (j = 0; j < col; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("After two matrix sum:\n ");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%4d",sum[i][j]);
        }
        printf("\n");
        
    }
}
