#include "People.hpp"
#include "Birthday.hpp"
#include <iostream>
using namespace std;

People::People(string name, Birthday birthdayof)
    : x(name), dateOfBirth(birthdayof)
{
}
void People::printinfo()
{
    cout << x << "was born on";
    dateOfBirth.printdate();
}
