#include<iostream>
using namespace std;

int main()
{
   int a=5;
   char ch='c';
   wchar_t m='H';
   char16_t p='a';
   char32_t s='M';int q=9;
   cout<<sizeof(a)<<"\n"<<sizeof(ch)<<"\n"<<sizeof(m)<<"\n"<<sizeof(p)<<"\n"<<sizeof(s)<<"\n";
   if(1==1)
   {
      int q=5;
      cout<<q<<"\n";
   }
   cout<<q;
   return 0;
}

