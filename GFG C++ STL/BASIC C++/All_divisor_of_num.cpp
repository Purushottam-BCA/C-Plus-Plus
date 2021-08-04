#include<bits/stdc++.h>
using namespace std;
// Time - O(sqrt(n))   Space - O(1)    Sorted
int main()
{
   int n,i;
   cin>>n;
   for(i=1;i<=sqrt(n);i++)
      if(n%i==0)
         cout<<i<<" ";
   for(i=sqrt(n);i>=1;i--)
      if(n%i==0)
         cout<<(int)(n/i)<<" ";
   return 0;
}
