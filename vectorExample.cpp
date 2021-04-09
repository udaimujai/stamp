#include <iostream>
#include <vector>
using namespace std;
vector<int> returner(vector<int> &A, int k);
int main()
{
    std::vector<int> i = {1, 2, 3, 4};

    returner(i, 3);
}
vector<int> returner(vector<int> &A, int k)
{
    for (std::vector<int>::iterator it = A.begin(); it != A.end(); ++it)
    {
        cout << *it;
        cout << endl;
    }
    return A;
}