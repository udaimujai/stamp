#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 85;
    int d = 30;
    int step = 0;
    do
    {
        x = x + d;
        step++;
    } while (x <= y);
    cout << step;
    return step;
}
