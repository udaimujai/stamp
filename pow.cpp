#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;
int main()
{
    int x = 2, y = 2;
    int h = 0;
    h = pow(x, y);
    cout << h;
    h = round(2.3);
    cout << h;
    cout << floor(2.3);
    cout << ceil(2.3);
    cout << trunc(2.3);
    cout << "ok";
    std::string str = std::bitset<8>(123).to_string();
    cout << str;
}