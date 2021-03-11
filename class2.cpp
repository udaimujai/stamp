#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    Employee bo;
    bo.setName("Udaya");

    cout << bo.getName();
    return 0;
}