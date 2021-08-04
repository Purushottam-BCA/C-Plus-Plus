#include<bits/stdc++.h>
using namespace std;

class Item{
public:
   int a;
   static int k;

};

int Item::k=15;

int main()
{
   Item i1,i2;
   i1.a=10;
   cout<<i1.a<<" "<<i2.a<<endl;
   cout<<Item::k;
   return 0;
}
