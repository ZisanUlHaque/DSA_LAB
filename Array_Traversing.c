#include<stdio.h>
int main()
{
    int i,n,a[1000];

    printf("Enter the range of the array: ");
    scanf("%d",&n);

    printf("\nEnter thr array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nAfter traverse: ");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}