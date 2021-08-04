#include<stdio.h>
int main()
{
   int n,i,j,a[10][10];
   a[0][0]=1;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      for(j=0;j<=i;j++)
      {
         if(j==0 && i>0) // First Element of other rows
            a[i][j]=a[i-1][i-1];
         else if(j>0 && i>0)
            a[i][j]=a[i][j-1]+a[i-1][j-1];
        printf("%d ",a[i][j]);
      }
      printf("\n");
   }
   return 0;
}
