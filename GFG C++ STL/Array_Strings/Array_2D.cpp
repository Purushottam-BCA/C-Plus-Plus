#define ar(i,n) for(int i=0;i<n;i++)
#define ard(i,n) for(int i=n-1;i>=0;i--)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl "\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int row,col;
   cin>>row>>col;
/* Method 1 :: Using Double Pointer
   int **a;
   a=new int*[row];
   ar(i,row)
      a[i]=new int[col];
   ar(i,row)
      ar(j,col)
         a[i][j]=i+j;
*/

/* Method 2  :: Using Array of Pointers
   int *a[row];
   ar(i,row)
      a[i]=new int[col];
   ar(i,row)
   ar(j,col)
   a[i][j]=i+j;
*/

/* Method 3 :: Using Array of Vector
   vector <int>a[row];
   ar(i,row)
      ar(j,col)
         a[i].push_back(i+j);
*/

/* Method 4 :: Using Vector of Vectors
   vector <vector<int>> a;
   ar(i,row)
   {
      vector <int> v;
      ar(j,col)
         v.push_back(i+j);
      a.push_back(v);
   }
*/
   ar(i,row)
   {
      ar(j,col)
      cout<<a[i][j]<<"  ";
   cout<<nl;
   }
   return 0;
}
