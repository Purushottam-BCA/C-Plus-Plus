#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0)
         return false;
   return true;
}

int main()
{
   int a;
   cin>>a;
   for(int i=2;i<=a;i++)
   {
    if(isprime(i))
      while(a%i==0)
      {
         cout<<i<<" ";
         a/=i;
      }
   }
   return 0;
}
