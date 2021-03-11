#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string name;
};

int main()
{
    Employee bo;
    bo.name = "Udaya";

    cout << bo.name;
    return 0;
}