#include<bits/stdc++.h>
using namespace std;

class sample
{
private:
      int a,b;
public:
      sample(int a,int b)  // Parametrized Constructor
      {
         (*this).a = a;
         (*this).b = b;
      }

      sample(sample &old)  // Copy Coonstructor
      {
         a = old.a;
         b = old.b;
      }
      // Old object data will be copied into newly created Object.

      void print()
      {
         cout<<"A = "<<a<<endl;
         cout<<"B = "<<b<<endl;
      }
};
int main()
{
   sample s1(10,20); // Parameterized constructoor will be invoked.
   s1.print();

   sample s2(s1); // Invoking Copy Constructor
   s2.print();
   return 0;
}
