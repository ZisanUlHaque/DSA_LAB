#include <stdio.h>

int main() 
{
    int i, j, r, c, m, n;
    int a[100][100], b[100][100], d[100][100];

    printf("\nEnter the number of rows for the first matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &c);
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Display the first matrix
    printf("\nThe first matrix is:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    // Input the dimensions and elements of the second matrix
    printf("\nEnter the number of rows for the second matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Display the second matrix
    printf("\nThe second matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }

    // Check if matrices have the same dimensions
    if (r == m && c == n) {
        // Perform matrix addition
        for (i = 0; i < r; i++) 
        {
            for (j = 0; j < c; j++) 
            {
                d[i][j] = a[i][j] + b[i][j];
            }
        }

        // Display the resulting matrix after addition
        printf("\nThe resulting matrix after addition is:\n");
        for (i = 0; i < r; i++) 
        {
            for (j = 0; j < c; j++) 
            {
                printf("%4d", d[i][j]);
            }
            printf("\n");
        }
    } 
    else 
    {
        printf("\nMatrix addition is impossible as dimensions do not match.\n");
    }

    return 0;
}
