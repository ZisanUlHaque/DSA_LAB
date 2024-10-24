#include <stdio.h>

int main() 
{
    int i, j, k, rows1, cols1, rows2, cols2;
    int a[100][100], b[100][100], result[100][100];

   
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows1; i++) 
    {
        for (j = 0; j < cols1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if matrix multiplication is possible
    if (cols1 != rows2) 
    {
        printf("Matrix multiplication is not possible with these dimensions.\n");
        return 0;
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows2; i++) 
    {
        for (j = 0; j < cols2; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < rows1; i++) 
    {
        for (j = 0; j < cols2; j++) 
        {
            for (k = 0; k < cols1; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resulting matrix after multiplication:\n");
    for (i = 0; i < rows1; i++) 
    {
        for (j = 0; j < cols2; j++) 
        {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
