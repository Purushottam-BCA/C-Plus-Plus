#include <bits/stdc++.h>
using namespace std;

class Employee {
    public:
        string id, name;
        int years;

        //'this' keyword here retrieves the object's
        //instance variables: id, name, years hidden
        //by their same-name local counterparts
        Employee(string id, string name, int years) {
            this->id = id;
            this->name = name;
            this->years = years;
        }

        //here we don't need to use 'this' keyword
        //explicitly as their are no local variables
        //with the same name. So, compiler automatically
        //deduces it as instance variables
        void printDetails() {
            cout << "ID: " << id
                 << ", Name: " << name
                 << ", Experience: " << years;
        }
};

int main()
{
    Employee emp("GFG123", "John", 4);

    emp.printDetails();
    return 0;
}
