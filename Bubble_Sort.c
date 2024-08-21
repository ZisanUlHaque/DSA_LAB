#include<stdio.h>
int main()
{
    int i,n,ar[1000],pass,com,tmp;

    printf("Enter the range of the array: ");
    scanf("%d",&n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }

    for(pass = n-1;pass>0;pass--)
    {
        for (com = 0; com < pass; com++)
        {
            if(ar[com]>ar[com+1])
            {
                tmp = ar[com];
                ar[com] = ar[com+1];
                ar[com+1] = tmp;
            }
        }
        
    }
    printf("After sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%4d",ar[i]);
    }
    
    return 0;
}