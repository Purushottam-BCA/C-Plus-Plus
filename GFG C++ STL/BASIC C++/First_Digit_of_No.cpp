#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   /* Method 1
   int m = log10(n);
   cout<<n/(int)pow(10,m); */
   while(n>=10)
      n/=10;
   cout<<n;
   return 0;
}
