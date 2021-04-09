#include <iostream>
#include <cstring>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    string S = "0 - 22 1985--324";
    int n = S.length();
    int cnt = 0;
    string output;
    char chary[n + 1];
    strcpy(chary, S.c_str());
    cout << chary;
    for (int x = 0; x <= n - 1; x++)
    {

        if (cnt == 2)
        {
            output = output + "-";
            cnt = 0;
        }
        if (chary[x] == ' ' || chary[x] == '-')
        {
            continue;
        }
        output = output + chary[x];
        cout << output << endl;
        cnt++;
    }
    cout << output;
    return 1;
}