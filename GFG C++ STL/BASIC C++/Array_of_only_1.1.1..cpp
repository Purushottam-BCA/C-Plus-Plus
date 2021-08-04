#include<bits/stdc++.h> // https://youtu.be/h9t7JF50Mpw (Video) || STILL PENDING
using namespace std;

bool isPossible(int a[]) // 9 3 5
{
   long sum=0;
   int maxm=0;
   int n = sizeof(a)/sizeof(a[0]);
   for(int i=0;i<n;i++)
   {
      sum+=a[i];
      if(a[maxm]<a[i])
         maxm=i;
   }    // sum =17 max= 0

   long diff=sum-a[maxm]; // 17 - 9 = 8 Remaining Array Sum
   if(a[maxm]==1 || diff==1 ) return true;
   if(diff>a[maxm] || diff==0 || a[maxm]%diff==0 )return false;
   a[maxm]%=diff; // 9 % 8 = 1
   return isPossible(a);
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
         cin>>a[i];
      cout<<std::boolalpha<<isPossible(a);
   }
   return 0;
}
