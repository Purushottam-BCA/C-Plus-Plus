#include<bits/stdc++.h>
using namespace std;
int& fun()
{
   static int x=20;
   return x;
}

int main()
{
   int &m = fun();
   cout<<fun()<<"\n";
   m=30;
   cout<<fun()<<"\n";
   m=60;
   cout<<fun()<<"\n";
   return 0;
}
