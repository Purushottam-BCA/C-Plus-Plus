#define ar(i,n) for(int i=0;i<n;i++)
#define ard(i,n) for(int i=n-1;i>=0;--i)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])

#include<bits/stdc++.h>
using namespace std;

int findSum(string &str) // Sum of all numbers in the string Consecutive also.
{
   string temp="0";
   int sum=0;
   for(char ch:str)
   {
      if(isdigit(ch))
         temp+=ch;
      else
      {
         int num=stoi(temp);
         sum += num;
         temp="0";
      }
   }
   return sum + stoi(temp);

}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      string s;
      cin>>s;
      int sum = findSum(s);
      cout<<sum;
      nl;
   }
   return 0;
}


/*
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 123;
    std::string str = std::to_string(n);  // number to string

    string pp = "123";
    int num1 = stoi(pp);  // String to Number
    cout << "stoi(\"" << pp << "\") is " << num1 << '\n';
}  */
