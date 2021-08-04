#include<stdio.h>

int RevDig(int n)
{
   static int sum=0;
   if(n==0)
      return sum;
   else{
         sum=RevDig(n%10)*10+(n%10);
         return sum;
        }
   return sum;
}

int main()
{
   printf("%d",RevDig(153));
   return 0;
}
