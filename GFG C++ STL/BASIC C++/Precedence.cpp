#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a=5;
   int b=++a + a++ + ++a + a++;
   cout<<a<<" "<<b;
   int p=10,q=15;
   int r = p = q;
   cout<<p<<q<<r;
   return 0;
}
