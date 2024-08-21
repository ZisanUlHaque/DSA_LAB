#include<stdio.h>
int main()
{
    int i,n,ar[1000],src,found;

    printf("Enter the range of the array: ");
    scanf("%d",&n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("Enter the elements to search: ");
    scanf("%d",&src);

    found = 0;
    for ( i = 0; i < n; i++)
    {
        if (ar[i] = src)
        {
            found = 1;
        }
    }
    if (found = 0)
    {
        printf("Not Found");
    }
    else{
        printf("Found");
    }
    
    
    return 0;
}