#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a;
   cin>>a;
   if(a%2==0)
      if(a>0)
         cout<<"Positive Even";
      else if(a<0)
         cout<<"Negative Even";
      else
         cout<<"Zero";
   else
      if(a>0)
         cout<<"Positive Odd";
      else if(a<0)
         cout<<"Negative Odd";
      else
         cout<<"Zero";
   return 0;
}
