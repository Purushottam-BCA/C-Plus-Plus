#include <bits/stdc++.h>
using namespace std;

long long nextPrime(long long n)
{
    bool a[1000000];
    long long nextr,prevr;
    memset(a,true,sizeof(a));
    for(long long i=2;i*i<=1000000;i++)
        if(a[i])
            for(long long j=i;j*i<=1000000;j++)
                a[i*j]=false;
    if(n==1)
      return 2;
    if(a[n])
      return n;
    for(long long k=n+1;k<=1000000;k++) // finding next prime
        if(a[k])
        {
         nextr=k;
         break;
        }
    for(long long k=n-1;k>=2;k--) // finding Prev prime
        if(a[k])
         {
            prevr=k;
            break;
         }
      long long diff1= n-prevr;
      long long diff2= nextr-n;
      if(diff1==diff2)
         return prevr;
      else
         return nextr;
}

int main() {
	long long t;
	cin>>t;
	while(t--)
   {
	     long long n;
        cin>>n;
        cout<<nextPrime(n)<<endl;
	}
}
