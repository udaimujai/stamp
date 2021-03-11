#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
<<<<<<< HEAD
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
=======
>>>>>>> 788222f (added class1 and class2. in class2 made variable name as public)
    string name;
};

int main()
{
    Employee bo;
<<<<<<< HEAD
    bo.setName("Udaya");

    cout << bo.getName();
=======
    bo.name = "Udaya";

    cout << bo.name;
>>>>>>> 788222f (added class1 and class2. in class2 made variable name as public)
    return 0;
}