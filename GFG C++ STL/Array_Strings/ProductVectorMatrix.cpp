#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        vector <vector<int>> m(A.size());
        for(int i=0;i<A.size();i++)
        {
            m[i].assign(B[i].size(),0);
            for(int j=0;j<B[i].size();j++)
            {
                for(int k=0;k<A.size();k++)
                 m[i][j]+= A[i][k]*B[k][j];
            }
        }
        return m;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > A(row);
        for(int i=0; i<row; i++)
        {
            A[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>A[i][j];
            }
        }
        cin>> row>> col;
        vector<vector<int> > B(row);
        for(int i=0; i<row; i++)
        {
            B[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>B[i][j];
            }
        }
        Solution ob;
        vector<vector<int> > result = ob.multiplyMatrix(A,B);

        if(result.size() == 0)
            cout<<"-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout<<result[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
