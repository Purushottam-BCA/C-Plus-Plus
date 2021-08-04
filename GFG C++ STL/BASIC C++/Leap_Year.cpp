#include<bits/stdc++.h>
using namespace std;

int main()
{
  /* int n;
   cin>>n;
   if(n&1)
      cout<<"I Wins";
   else
      cout<<"Other Player Wins"; */
   int a;
   cin>>a;
   string g=(a%400==0 || (a%4==0 && a%100!=0))?"Leap Year":"Not a Leap Year";
   cout<<g;
   return 0;
}
