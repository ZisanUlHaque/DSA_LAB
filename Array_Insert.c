
#include<stdio.h>
int main()
{
    int n,pos,val,ar[1000];;

    printf("Enter the size of the array: ");
    scanf("%d",&n); 
  
  printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("Enter the position and value: ");
    scanf("%d %d",&pos,&val);
    for(int i=n;i>=pos+1;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[pos]=val;

    printf("Print after insertation: ");
    for(int i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}