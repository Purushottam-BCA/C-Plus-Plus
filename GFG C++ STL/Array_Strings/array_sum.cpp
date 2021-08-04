#include<bits/stdc++.h>
using namespace std;

int main()
{

  int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
         cin>>a[i];
      int maxm=a[0];
      for(int x:a)
         if(x>maxm)
            maxm=x;
      cout<<maxm<<"\n";
   }

   return 0;
}
