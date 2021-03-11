#include <iostream>
using namespace std;
class Saying
{
public:
    void coolsaying()
    {
        cout << "just saying";
    }
};
int printsomething(int X, int Y)
{
    int sum = X + Y;
    return sum;
}
int main()
{
    Saying saying;
    saying.coolsaying();

    if (8 > 6)
    {
        cout << "working class" << endl;
        cout << printsomething(10, 12) << endl;
    }
    return 0;
}
