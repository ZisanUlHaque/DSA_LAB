#include<stdio.h>
int main()
{
    int i,n,sum=0,a[1000];

    printf("Enter the range of the array: ");
    scanf("%d",&n);

    printf("\nEnter thr array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nSum of the array: ");
    for ( i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    
    return 0;
}