#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[]={10 };
   int n=sizeof(a)/sizeof(a[0]);
   bool s=true;
   for(int i=1;i<n;i++)
      if(a[i-1]>a[i])
      {
         s=false;
         break;
      }
   cout<<std::boolalpha<<s<<" ";
   return 0;
}
