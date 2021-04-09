#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A);
int main()
{
    vector<int> A = {1, 2, 3, 5};
    int b = solution(A);
    cout << b;
}
int solution(vector<int> &A)
{

    sort(A.begin(), A.end());
    int sizer = A.size();
    for (int x = 0; x <= sizer - 1; x++)
    {
        if (A[x + 1] - A[x] == 1)
        {
            continue;
        }
        else
        {

            return A[x] + 1;
        }
    }
}