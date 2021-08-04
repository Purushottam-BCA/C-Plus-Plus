#include<bits/stdc++.h>
using namespace std;

bool findElement(int arr[],int n,int n2,int s)
{
   int i=0,j;
   j = (n>=s)? n/s:n%s;
   j-=1;
   while(i<=j)
   {
      bool counter=false;
      for(int k=i;k<=j;k++)
         if(arr[k]==n2)
         {
            counter=true;
            break;
         }
      if(!counter)
         return false;
      i+=s;
      n-=s;
      j = (n>=s)? j+s:n%s;
   }
   return true;
}

int main()
{
   int n,s,n2,t=2;
   while(t--)
{
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
      cin>>arr[i];
   cin>>n2>>s;
   if(findElement(arr,n,n2,s))
      cout<<"1";
   else
      cout<<"0";
}
   return 0;
}
