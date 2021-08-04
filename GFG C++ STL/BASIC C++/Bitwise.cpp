#include<bits/stdc++.h>
using namespace std;

int main() // Change Case without if else and number
{
   /*
   unsigned char t;
   cin>>t;
   cout<<(char)((t>='a'&&t<='z')?(t-'a'+'A'):(t+'a'-'A'));
   */
   unsigned int k;
   short int counter=0;
   cin>>k;
   // 100 or 50 or 20 or 1 notes required
   counter += k/100;
   k -= counter*100;

   counter += k/50;
   k -= (k/50)*50;

   counter += k/20;
   k -= (k/20)*20;

   counter += k;
   cout<<counter;
   return 0;
}
