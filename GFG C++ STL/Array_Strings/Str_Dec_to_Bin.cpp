#define ar(i,n) for(int i=0;i<n;i++)
#define ard(i,n) for(int i=n-1;i>=0;--i)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

string dec2bin(int &a)
{
   string temp="";
 /*  while(a>0) // Method 1
   {
      temp=std::to_string(a%2)+temp;
      a>>=1;
   }  */
   while(a>0) // Method - 2
   {
      temp=(char)((a&1)+'0')+temp;
      a>>=1;
   }
 return temp;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int s;
      cin>>s;
      cout<<dec2bin(s);
      nl;
   }
   return 0;
}
