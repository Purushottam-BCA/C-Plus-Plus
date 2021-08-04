// 2 different ways to solve the problem
// 1. Using The stack data structure
// 2. Using 2 counter varibale each for opening bracket as well as closing bracket.

#include<bits/stdc++.h>
using namespace std;

/* Method 1

char st[20];
int TOP;

char peek()
{
   return st[TOP];
}

void push(char ch)
{
   st[++TOP]=ch;
}

char pop()
{
   return st[TOP--];
}

int main()
{
   string a;
   cin>>a;
   TOP=-1;
   for(int i=0;i<a.length();i++)
   {
      char ch=a[i];
      if(ch=='(')
         push(a[i]);
      else if(ch==')')
      {
         if(TOP >= 0 and peek()=='(')
             pop();
         else
             push(ch);
      }
   }
   cout<<(TOP+1)<<"\n";
   return 0;
}
*/

// Method 2 (Better Storage Consumption) No extra storage required

int main()
{
   string s;
   cin>>s;
   int left=0,right=0;
   for(int i=0;i<s.length();i++)
   {
      if(s[i]=='(')
         left++;
      else
      {
         if(left>0)
            left--;
         else
            right++;
      }
   }
   cout<<left+right;
   return 0;
}

