#define ar(i,n) for(int i=0;i<n;i++)
#define ard(i,n) for(int i=n-1;i>=0;i--)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,s;
   cin>>n;
   vector <vector<int>> vec(n,vector <int>(n,5));
   vector <vector<int>> ans(n,vector <int>(n,0));
   ar(i,n)
      ar(j,n)
      {
         cin>>s;
         vec[i][j]=s;
      }
   ar(i,n)
   {
      ar(j,n)
      {
      ans[i][j]=vec[j][i];
      cout<<vec[i][j]<<" ";
      }
   nl;
   }
   nl;
   cout<<"TRANSPOSE";
   nl;
   ar(i,n)
   {
      ar(j,n)
      cout<<ans[i][j]<<" ";
      nl;
   }
   return 0;
}
