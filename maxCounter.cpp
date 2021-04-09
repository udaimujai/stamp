#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int N, vector<int> &A);
int main()
{

    int N = 5;
    vector<int> A = {3, 3, 4, 6, 1, 4, 4};
    solution(N, A);
}

vector<int> solution(int N, vector<int> &A)
{
    vector<int> counter;
    for (int i = 1; i <= N - 1; i++)
        counter.push_back(0);
    int len = A.size();
    for (int x = 0; x <= len - 1; x++)
    {
        if (A[x] > N)
        {
            for (int y = 0; y <= N - 1; y++)
            {
                counter[y]++;
            }
        }
        else
        {
            cout << counter[(A[x]) - 1] << endl;
            counter[(A[x]) - 1]++;
            cout << "-";
            cout << counter[(A[x]) - 1];
            cout << "-";
            cout << x;
            cout << "-";
            cout << (A[x]);
        }
    }
    for (int x = 0; x <= N; x++)
    {
        cout << "&";
        cout << counter[x];
    }
    return counter;
}