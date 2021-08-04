#include<bits/stdc++.h>
using namespace std;

void show(int a,int b, int c)
{
   cout<<a<<" "<<b<<" "<<c<<"\n";
}
int main()
{
   int a=2,b=3;
   show(++a,++a,++a);
   show(b++,++b,b++);
   return 0;
}
