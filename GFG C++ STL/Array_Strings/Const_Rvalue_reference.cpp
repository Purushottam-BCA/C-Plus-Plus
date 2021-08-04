#include<bits/stdc++.h>
using namespace std;

void fun(int &&x)
{
   x=x+10;
   cout<<x<<"\n";
}

void fun2(string &&x)
{
   x="Hello "+x;
   cout<<x<<"\n";
}

int main()
{
   fun(5);
   fun2("World");
   return 0;
}
