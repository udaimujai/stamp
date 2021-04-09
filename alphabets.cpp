#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

    vector<string> m = {"2B", "2C", "2D", "2E", "3B", "3C", "3D", "3E"};
    string alphabets[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    int sizeAvail = m.size();
    std::string result, r2, r3, r4, r5, r6, r7, r8;
    bool B, C, D, E, F, G, H, J;
    int availablity = 0;
    int n = sizeof(alphabets) / sizeof(alphabets[0]);
    for (int y = 1; y <= 26; y++)
    {
        result = std::to_string(y) + "B";
        r8 = std::to_string(y) + "J";
        r2 = std::to_string(y) + "C";
        r3 = std::to_string(y) + "D";
        r4 = std::to_string(y) + "E";
        r5 = std::to_string(y) + "F";
        r6 = std::to_string(y) + "G";
        r7 = std::to_string(y) + "H";
        B = (std::find(m.begin(), m.end(), result) != m.end());
        C = (std::find(m.begin(), m.end(), r2) != m.end());
        D = (std::find(m.begin(), m.end(), r3) != m.end());
        E = (std::find(m.begin(), m.end(), r4) != m.end());
        F = (std::find(m.begin(), m.end(), r5) != m.end());
        G = (std::find(m.begin(), m.end(), r6) != m.end());
        H = (std::find(m.begin(), m.end(), r7) != m.end());
        J = (std::find(m.begin(), m.end(), r8) != m.end());
        if ((B & C & D & E))
        {
            availablity++;
        }
    }
    cout << availablity;
}