#include <bits/stdc++.h>
using namespace std;

class Employee {
    private:
        string id, name;
        int years;

    public:
        Employee setId(string id) {
            this->id = id;
            return *this;
        }

        Employee setName(string name) {
            this->name = name;
            return *this;
        }

        Employee setYears(int years) {
            this->years = years;
            return *this;
        }

        void printDetails() {
            cout << "ID: " << id
                 << ", Name: " << name
                 << ", Experience: " << years;
        }
};

int main()
{
    Employee emp;

    emp.setId("GFG123").setName("John").setYears(4).printDetails();

    return 0;
}
