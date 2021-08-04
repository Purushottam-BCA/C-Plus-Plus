#define ar(n) for(int i=0;i<n;i++)
#define ard(n) for(int i=n-1;i>=0;--i)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl "\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[]{10,20,30,40,50,60,70,80};
   int *p=a;
   int n=len(a);
   ar(n)
      cout<<a[i]<<" "<<*(p+i)<<nl;
   return 0;
}
