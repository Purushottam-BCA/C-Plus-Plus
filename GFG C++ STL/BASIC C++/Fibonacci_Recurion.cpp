#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Complete this function
    int fibonacci(int n) // (5)  (4+3)  (3+2 + 2+1) [(2+1 + 5]
    {
        if(n==0||n==1||n==2)
            return 1;
        else
            return (fibonacci(n-1)+fibonacci(n-2));
    }
};

// { Driver Code Starts.
int main() {
	int T;

	//taking total testcases
	cin>>T;
	while (T--)
	{
	    int n;
	    //taking number n
	    cin>>n;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.fibonacci(n)<<endl;


	}
	return 0;
}
