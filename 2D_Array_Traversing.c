
#include<stdio.h>
int main()
{
   int i,j,r,c,a[100][100];

    printf("\n Enter the range of raw:");
    scanf("%d",&r);

    printf("\n Enter the range of column:");
    scanf("%d",&c);

    printf("\n Enter the element of 2D array:");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }

    printf("\n after traversing:\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
           printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}