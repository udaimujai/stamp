#include <iostream>
#include "Birthday.hpp"
#include "People.hpp"
using namespace std;

int main()
{

    Birthday birthdayof(1989, 23, 01);
    People udaya("Udaya", birthdayof);
    udaya.printinfo();
}