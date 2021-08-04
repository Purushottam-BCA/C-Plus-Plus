#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
      cin>>a[i];
   int counter=0;
   for(int i=0;i<n;i++)  // 10 15 10 20 6 5 10 6
   {
    bool b=true;
    for(int j=i-1;j>=0;j--)
      if(a[i]==a[j])
      {
         b=false;
         break;
      }
      if(b)
         counter++;
   }
   cout<<counter<<" ";
   return 0;
}
