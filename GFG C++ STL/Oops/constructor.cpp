#define nl cout<<"\n"
#define len(a) sizeof(a)/sizeof(a[0])
#include<bits/stdc++.h>
using namespace std;

class student
{
private:
   int a,b;
public:
     student()
   {
      a=0;
      b=0;
      cout<<"\nDefault constructor :: ";
   }

   student(int x)
   {
      a=x;
   }

   student(int x,int y)
   {
      a=x;
      b=y;
   }

   display()
   {
      cout<<a<<" "<<b<<endl;
   }
};

int main()
{
   student *s1= new student(5,10);
   s1->display();
   student s2(10,20);  // Method 1
   s2.display();

   student s3 = student(5); // method 2
   s3.display();

   student s4 = 6;  // Only in case of single parameter
   s4.display();
   return 0;
}
