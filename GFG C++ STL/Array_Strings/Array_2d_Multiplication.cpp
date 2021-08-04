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
   vector <vector <int>> A(n,vector<int>(n,0));
   vector <vector <int>> B(n,vector<int>(n,0));
   vector <vector <int>> Res(n,vector<int>(n,0));
   ar(i,n)
      ar(j,n)
      {
         cin>>s;
         A[i][j]=s;
      }
   nl;
   cout<<"1st Matrix"; nl;
   ar(i,n)
   {
      ar(j,n)
      cout<<A[i][j]<<" ";
   nl;
   }
   ar(i,n)
      ar(j,n)
      {
         cin>>s;
         B[i][j]=s;
      }
   nl;
   cout<<"2nd Matrix"; nl;
   ar(i,n)
   {
      ar(j,n)
      cout<<B[i][j]<<" ";
   nl;
   }

   nl;
   ar(i,n)
   {
      ar(j,n)
      {Res[i][j]=0;
         ar(k,n) // Brows or Acoloum
          Res[i][j]+=A[i][k]*B[k][j];
   }}
    nl;
   cout<<"MULTIPLICATION";
   nl;
   ar(i,n)
   {
      ar(j,n)
      cout<<Res[i][j]<<" ";
   nl;
   }
   return 0;
}
