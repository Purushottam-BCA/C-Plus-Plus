#define ar(i,n) for(int i=0;i<n;i++)
#define ard(i,n) for(int i=n-1;i>=0;--i)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

void matchPat(string txt,string pt)
{
   static int res=0;
   res += txt.find(pt);
   if(res!=string::npos)
      {
         cout<<"Pattern found at "<<res;
         nl;
         string temp=txt.substr(res+1);
         matchPat(temp,pt);
      }
   else
      return;
  /* while(res!=string::npos)
  // {
      cout<<"Pattern found at "<<res;
      nl;
      res=matchPat(txt.substr(res),pt);
      res = txt.find(pt,res+1);
  // }-*/
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      string text,pattern;
      cin>>text>>pattern;
      matchPat(text,pattern);
      nl;
   }
   return 0;
}
