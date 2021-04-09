#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> solution(vector<int> &m, int k);

int main()
{
    vector<int> m = {1, 2, 3, 4, 5, 6};
    solution(m, 2);
}

vector<int> solution(vector<int> &m, int k)
{
    int vecSize = m.size();
    int lastMember = 0;
    bool inRange(unsigned low, unsigned high, unsigned x);
 if (inRange(0,100,vecSize))
 {
    for (int x = 1; x <= k; x++)
    {
        lastMember = m.back();
        for (int y = vecSize; y >= 1; y--)
        {
            m[y] = m[y - 1];
        }
        m[0] = lastMember;
    }
    for (int mm = 0; mm <= vecSize - 1; mm++)
    {
        cout << m[mm] << endl;
    }
}else(return 0)
    return m;
}