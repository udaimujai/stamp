#include <iostream>
#include <cstring>
#include <bitset>
using namespace std;
unsigned int countBits(unsigned long long n);
int main()
{

    unsigned int x = 0;

    x = countBits(1234);

    cout << x;
}
unsigned int countBits(unsigned long long n)
{
    std::string str = std::bitset<64>(n).to_string();
    int len = str.length();
    int cntr = 0; // counter to count the number of ones
    for (int x = 0; x <= len - 1; x++)
    {
        //loop to iterate through string
        if (str[x] == '1')
        {
            cntr++;
        }
    }
    return cntr;
}