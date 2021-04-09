#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void stackPrint(stack<int> m);
int main()
{
    stack<int> m;
    m.push(1);
    m.push(11);
    m.push(12);
    m.push(13);
    m.push(15);
    m.push(16);
    m.push(14);
    m.push(18);

    cout << m.top();
    stackPrint(m);
    cout << m.top();
}

void stackPrint(stack<int> m)
{
    while (!m.empty())
    {
        cout << m.top() << endl;
        m.pop();
    }
}