#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[]{10,20,30,40,50};
   int *p=a;
   int **m=&p;
   *p++;
   *++*m;
   cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<*p<<" "<<**m;
   return 0;
}
