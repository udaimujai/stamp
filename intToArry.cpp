#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    std::string str = std::bitset<8>(10).to_string();
    cout << str << endl;
    int str_len = str.length();
    int i = stoi(str);
    int modulo = 0;
    int trims = 0;
    cout << i;
    int chararray[str_len + 1];
    for (int x = 0; x <= str_len; x++)
    {
        modulo = i % 10;
        chararray[x] = modulo;
        i = i / 10;
        cout << chararray[x] << endl;
    }
}