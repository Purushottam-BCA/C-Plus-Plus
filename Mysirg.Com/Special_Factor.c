#include<stdio.h>
int main()
{
    int n,i,temp;
  	scanf("%d",&n);
  	for(i=2;i<=n/2;i++)
    {
      temp=n;
      if(n%i==0)
      {
        while(temp!=1 && temp%i==0)
          temp=temp/i;
        if(temp==1)
        {
          printf("%d",i);
          return 0;
      	}
      }
    }
  printf("-1");
  return 0;
}
