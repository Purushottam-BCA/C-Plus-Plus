#define ar(i,n) for(int i=0;i<n;i++)
#define ard(i,n) for(int i=n-1;i>=0;--i)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

int main()
{
   string a="Purushottam Kumar";
   ar(i,a.length())
      cout<<a[i];
   nl;
   nl;
   ard(i,a.length())
      cout<<a[i];
   nl;
   nl;
   for(char &ch:a)
      cout<<ch;
   nl;
   nl;
   for(auto i=a.begin();i!=a.end();i++)
      cout<<(*i);
   nl;nl;
   return 0;
}
