#include<stdio.h>
int main()
{
    int i,n,max,ar[1000];

    printf("Enter the range of the array: ");
    scanf("%d",&n);

    printf("\nEnter thr array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    max = ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max = ar[i];
        }
    }
    printf("Maximum element: %d",max);
    return 0;
}