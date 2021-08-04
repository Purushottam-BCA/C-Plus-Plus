#include<bits/stdc++.h>
using namespace std;

int main()
{
   double k = 1244567.45; // if Total digits before point are more than 6 then it will be printed in power form
   cout<<k<<"\n";
   double a = 692125.65;  // if Total digits before decimal are equal to 6 then it will be printed in integer by rounding decimal value.
   cout<<a<<"\n";
   double b = 12445.453;  // By default total precission = 6
   cout<<b<<"\n";
   double d = 125.4; // Setprecision(n)
   cout<<std::setprecision(6);
   //cout<<std::showpos;
   cout<<std::showpoint;
   cout<<d<<"\n";
   double z = 1.2e+7;
   cout << z;
   return 0;
}
