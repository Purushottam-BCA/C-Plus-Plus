#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,ctr=0;
   cin>>n;

   /*
   for(int i=2;i<=n;i++)
   {
      bool flag=false;
      for(int j=2;j<=sqrt(i);j++)
         if(i%j==0)
         {
            flag=true;
            break;
         }
         if(!flag)
            ctr++;
   }
   cout<<ctr;
*/

// 2nd Method
   bool ar[n]={false}; // Make a boolean array and set all values to false;
   for(int i=2;i<sqrt(n);i++) // Check only Sqrt(n) element
   {
      if(!ar[i])
         for(int j=i; j*i<n; j++) // Now make the multiple of other number as false;
            ar[i*j]=true;
   }
   for(int i=2;i<n;i++)
      if(!ar[i])
       {
         cout<<i<<" ";
         ctr++;
       }
   cout<<"\n"<<ctr;
   return 0;
}
