#include <bits/stdc++.h>
using namespace std;

int nextPrime(int n)
{
    bool a[1000];
    memset(a,true,sizeof(a));
    for(int i=2;i*i<=1000;i++)
        if(a[i])
            for(int j=i;j*i<=1000;j++)
                a[i*j]=false;
    for(int k=n+1;k<=1000;k++)
        if(a[k])
            return k;
}

int main() {

	int t; cin>>t;

	while(t--){
	    int n; cin>>n;
        int ans = nextPrime(n);
        cout<<ans<<endl;
	}
}  // } Driver Code Ends
