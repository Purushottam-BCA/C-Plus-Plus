#define ar(i,n) for(int i=0;i<n;i++)
#define ard(i,n) for(int i=n-1;i>=0;--i)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

string CountChar(string &str)
{
   if(str=="") return str;
   string temp="";
   int counter=1;
   for(int i=1;i<str.length();i++)
   {
      if(str[i-1]==str[i])
         counter++;
      else
      {
         temp.push_back(str[i-1]);
         temp+= to_string(counter);
         counter = 1;
      }
   }
   return temp;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      string s;
      cin>>s;
      cout<<CountChar(s);
      nl;
   }
   return 0;
}
