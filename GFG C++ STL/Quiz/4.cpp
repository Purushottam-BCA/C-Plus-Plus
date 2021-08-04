#include<bits/stdc++.h>
using namespace std;

int main()
{
   cout<<( 1 << 2 + 3 << 4 );
   return 0;
}

/*
Logic : + has heigher pprecedence than <<

 cout<<( 1 << 2 + 3 << 4 )
 cout<<( 1 << 5 << 4 ) // it works left to right
 cout<<( 32 << 4 )
 32 * 2 *2 *2 *2 =512
*/
