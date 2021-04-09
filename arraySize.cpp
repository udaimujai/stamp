#include <iostream>
using namespace std;

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    int sizeOfArray;
    sizeOfArray = sizeof(A) / sizeof(A[0]);
    cout << sizeOfArray << endl;
}