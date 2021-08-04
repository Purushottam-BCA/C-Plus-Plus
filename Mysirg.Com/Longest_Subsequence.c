#include<stdio.h>
int main()
{
   int n,a[20],i,prev=1,cur=1,flag=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
      scanf("%d",a+i);
   for(i=0;i<n-1;i++)
   {
      if(a[i]<a[i+1])
      {
         flag=1;
         if(prev<=cur)
            prev++;
         cur++;
      }
      else
      {
         if(prev<=cur)
            prev=cur;
         cur=1;
      }
   }
  if(flag==1)
   printf("%d",prev);
  else
   printf("1");
   return 0;
}
