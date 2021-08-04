#include<stdio.h>
#include<math.h>
int main()
{
  int n,sum=0,k,i;
  long int sq;
  scanf("%d",&n);
  k=(int)log10(n)+1;
  sq=n*n;
  sum=sq%(int)pow(10,k)+sq/(int)pow(10,k);
  if(sum==n)
    printf("1");
  else
    printf("0");
      return 0;
}

