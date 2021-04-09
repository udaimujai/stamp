#include <iostream>
using namespace std;
int PrintArray(int arrayToPrint[], int SizeOfArray);
 int main()
{
    int array1[3] = {1, 2, 3};
    int array2[5] = {2, 4, 6};
    PrintArray(array1, 2);
}
int PrintArray(int arrayToPrint[], int SizeOfArray)
{
    for (int x = 0; x <= SizeOfArray; x++)
    {
        cout << arrayToPrint[x] << endl;
    }
    return 0;
}
