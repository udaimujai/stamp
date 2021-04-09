#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> solution(vector<int> &m, int k);

int main()
{
    vector<int> m = {1, 2, 3, 4, 5, 6};
    solution(&m, 5);
    return 0;
}

vector<int> solution(vector<int> &m, int k)