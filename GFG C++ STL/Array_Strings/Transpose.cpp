#define ar(i,n) for(int i=0;i<n;i++)
#define ard(i,n) for(int i=n-1;i>=0;--i)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

void transpose(int a[][4], int n)
    {
        int col;
        if(n%2==0)
            col=(n/2);
        else
            col =(n/2)+1;
        for(int i=0;i<n;i++)
          for(int j=i+1;j<n;j++)
            {
               int temp=a[i][j];
               a[i][j]=a[j][i];
               a[j][i]=temp;
            }
    }

int main()
{
int a[][4]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4};
  for(int i=0;i<4;i++)
 {   for(int j=0;j<4;j++)
      cout<<a[i][j]<<" ";
   nl;
 }
 nl;
 transpose(a,4);
 for(int i=0;i<4;i++)
 {
   for(int j=0;j<4;j++)
      cout<<a[i][j]<<" ";
   nl;
 }
   return 0;
}
