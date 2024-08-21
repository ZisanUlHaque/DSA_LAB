#include<stdio.h>
int main()
{
    int i,n,sum=0,a[1000];
    float avg;

    printf("Enter the range of the array: ");
    scanf("%d",&n);

    printf("\nEnter thr array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    
    avg = sum/2;
    printf("\nAvarage of the array elements: %.3f",avg);

    return 0;
}