#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   cout<<(n!=0?(int)log10(abs(n))+1:1);
   return 0;
}
