#include "Birthday.hpp"
#include <iostream>
#include <string>
using namespace std;

Birthday::Birthday(int y, int d, int m)
{
    year = y;
    date = d;
    month = m;
}
void Birthday::printdate()
{
    cout << year << date << month;
}
