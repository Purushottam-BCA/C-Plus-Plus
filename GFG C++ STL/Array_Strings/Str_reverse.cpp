#define ar(i,n) for(int i=0;i<n;i++)
#define ard(i,n) for(int i=n-1;i>=0;--i)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &s)
{
   int i=0,j=s.length()-1;
   while(i<j)
   {
      if(s[i]!=s[j])
         return false;
      i++;
      j--;
   }
   return true;
}

int main()
{
   string a;
   cin>>a;
   cout<<std::boolalpha<<palindrome(a);
   return 0;
}
