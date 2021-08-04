#include<bits/stdc++.h>
using namespace std;

void prime_range(int n)
{
   int ctr=0;
   bool ar[n]={false};
   for(int i=2;i<=sqrt(n);i++)
      if(!ar[i])
         for(int j=i;j*i<=n;j++)
            ar[i*j]=true;
   for(int i=2;i<=n;i++)
      if(!ar[i])
      {
         cout<<i<<" ";
         ctr++;
      }
      cout<<"\n"<<ctr;
}

int main()
{
   int n;
   cin>>n;
   prime_range(n);
   return 0;
}
