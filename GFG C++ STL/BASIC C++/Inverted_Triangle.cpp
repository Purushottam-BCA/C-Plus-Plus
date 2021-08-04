#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,i=1;
   cin>>n;
/*
   for(int i=1;i<=n;i++)
   {
      for(j=1;j<=n-i;j++)
         cout<<" ";
      for(j=1;j<=i;j++)
         cout<<"*";
      cout<<"\n";
   }
*/
   while(i<=n)
   {
      int j=1;
      while(j<=n-i)
      {
         cout<<" ";
         j++;
      }

      while(j<=n)
      {
         cout<<"*";
         j++;
      }
      cout<<"\n";
      i++;
   }

   return 0;
}
