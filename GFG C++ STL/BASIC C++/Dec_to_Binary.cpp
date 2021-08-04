#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,sum=0,jump=1;
   cin>>n;
   while(n>0)
   {
      int last=n%2;
      sum+=jump*last;
      n/=2;
      jump*=10;
   }
   cout<<sum;
   return 0;
}
