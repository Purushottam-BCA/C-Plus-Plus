#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,i;
   cin>>a>>b;
   int mn=max(a,b);
   for(i=mn;i<=a*b;i+=mn)
   {
      if(i%a==0 && i%b==0)
      {
         cout<<i;
         break;
      }
   }
   return 0;
}
