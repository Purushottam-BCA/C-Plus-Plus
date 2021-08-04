#include<bits/stdc++.h>
using namespace std;
/*
int main()
{
   int a,b,i;
   cin>>a>>b;
   int minm=min(a,b);
   for(i=minm;i>=1;i--)
      if(a%i==0 && b%i==0)
      {
         cout<<i;
         break;
      }
   return 0;
}
*/

int LCM(int a, int b){

int c=max(a,b);
for(int i=c;i<=a*b;i+=c)
if(i%a==0 && i%b==0)
    return i;
}

// { Driver Code Starts.

int main() {

	int t; cin>>t;

	while(t--){
	    int a, b; cin>>a>>b;
        cout<<LCM(a, b)<<endl;
	}
}  // } Driver Code Ends
