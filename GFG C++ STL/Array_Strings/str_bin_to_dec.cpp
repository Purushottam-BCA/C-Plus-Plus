#define ar(i,n) for(int i=0;i<n;i++)
#define ard(i,n) for(int i=n-1;i>=0;--i)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

void binary2dec(string &s)
{
   int sum=0,j=1;
   ard(i,s.length())
   {
      if(s[i]!='0'&& s[i]!='1')
         {
            cout<<"Invalid Binary";
            nl;
            return;
         }
      sum+=j*(s[i]-48);
      j*=2;
   }
   cout<<sum;
   nl;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      string a;
      cin>>a;
      binary2dec(a);
   }
   return 0;
}
