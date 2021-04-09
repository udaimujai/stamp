#include <iostream>
#include <bitset>
#include <math.h>
#include <cstring>
using namespace std;

int main()
{
    std::string str = std::bitset<8>(98).to_string();
    //cout << str;
    int n = str.length();
    int i = std::stoi(str);

    cout << i;
    int charary[n + 1];
    //strcpy(charary, str.c_str());
    cout << "after copying";
    const char one = 1;
    const char zero = 0;
    int modus = 0;
    int trims = 0;
    for (int f = 0; f <= n; f++)
    {
        modus = i % 10;
        charary[f] = modus;
        cout << "*";
        cout << charary[f];
        cout << "*";
        i = i / 10;
    }
    // cout << charary;
    cout << "endg";
    int counter1 = 0;
    int counter2 = 0;
    for (int x = 0; x <= n; x++)
    {
        if (charary[x] == 1)
        {
            for (int y = x + 1; y <= n; y++)
            {
                if (charary[y] == 0)
                {
                    counter1++;
                }
                else
                {
                    if (counter2 < counter1)
                    {
                        counter2 = counter1;
                    } //x = y;
                    break;
                }
            }
        }
    }

    cout << "the output";

    cout << counter2;
}
