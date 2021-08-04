#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
#include<bits/stdc++.h>
using namespace std;

class student
{
private:
   int a,b;
   void pr()
   {
      cout<<"HELLO";
   }
public:
   student():a(0),b(0)
   {
      cout<<"\nDefault constructor :: ";
   }

   student(int x,int y):a(x),b(y)
   {
      cout<<"\nParameterized Constructor :: ";
   }

   void display()
   {
      cout<<endl<<a<<" "<<b<<endl;
   }
};

int main()
{
   student s1;
   student s2(10,20);
   s1.display();
   s2.display();
   return 0;
}
