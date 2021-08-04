#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        int sum=0;
        if(n/10<=0) // 1
            return n;
        while(n>0)  // 10
        {
            sum+=(n%10);
            n/=10;
        }
        digitalRoot(sum);
    }
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n

	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;


	}
	return 0;
}  // } Driver Code Ends

//185
