#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void prank(long long a[], int n)
    {
        for(int i=0;i<n;i++) // Store we will increase the value
          a[i]+= (a[a[i]]%n)*n;

       for(int i=0;i<n;i++) // Now we will optain value by dividing
          a[i] = a[i]/n;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n];
        for(int i = 0 ;i<n;i++)
        {
            cin>>a[i];
        }
        Solution ob;
        ob.prank(a,n);
        for(int i = 0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}

/*Driver Code Ends

6
0 5 1 2 4 3 */
