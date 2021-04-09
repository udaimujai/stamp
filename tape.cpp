#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> &A);
int main()
{
    cout << "ok2";
    vector<int> A;
    A.push_back(3);
    A.push_back(1);
    A.push_back(2);
    A.push_back(4);
    A.push_back(3);
    int p = 2;
    cout << "ok1";
    solution(A);
}
int solution(vector<int> &A)
{
    cout << "ok4";
    //calculate sums
    int len = A.size();
    int sum2[len + 1] = {0};
    int sum1[len + 1] = {0};
    int diff[len - 1] = {0};
    cout << "ok---";
    for (int x = len - 1; x >= 0; x--)
    {
        for (int y = len - 1; y >= x; y--)
            sum2[x] += A[y];
        cout << "sum2";
        cout << sum2[x] << endl;
    }
    for (int x = 0; x <= len - 1; x++)
    {
        for (int y = 0; y <= x; y++)
            sum1[x] += A[y];
        cout << "sum1";
        cout << sum1[x] << endl;
    }
    for (int m = 1; m <= len - 1; m++)
    {
        diff[m - 1] = abs(sum1[m - 1] - sum2[m]);
    }
    int n = sizeof(diff) / sizeof(diff[0]);
    sort(diff, diff + n);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << diff[i] << endl;
    }
    cout << diff[0];
}