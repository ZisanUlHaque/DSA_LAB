
#include<stdio.h>
int main()
{
    int n,pos,ar[1000];
    printf("Enter the size of the array: ");
    scanf("%d",&n); 

    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("Enter the position to delete: ");
    scanf("%d",&pos);
    for(int i=pos;i<n-1;i++)
    {
        ar[i]=ar[i+1];
    }

    printf("Array after deletion: ");
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}