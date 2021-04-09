#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<string> A = {"pim", "pop"};
    vector<string> B = {"99999999", "23564789"};
    string P = "9999";
    // write your code in C++14 (g++ 6.2.0)
    int bookLen = B.size();
    int finder = 0;
    int cnt = 0;
    string temp;
    string names[bookLen];
    for (int x = 0; x <= bookLen - 1; x++)
    {
        temp = B[x];
        finder = temp.find(P);
        while (finder != 0)
        {
            names[cnt] = A[x];
            cout << names[cnt] << endl;
            cnt++;
            finder = 0;
        }
    }
    return 1;
}