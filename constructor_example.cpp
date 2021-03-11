#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    Employee(string z)
    {
        setName(z);
    }
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
    Employee bo("udaya");
    cout << bo.getName();
}