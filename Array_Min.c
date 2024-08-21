#include<stdio.h>
int main()
{
    int i,n,min,ar[1000];

    printf("Enter the range of the array: ");
    scanf("%d",&n);

    printf("\nEnter thr array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    min = ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min = ar[i];
        }
    }
    printf("Minimum element: %d",min);
    return 0;
}