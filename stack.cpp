#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void showstack(stack<int> s);

int main()
{
    stack<int> s;
    s.push(50);
    s.push(1);
    s.push(550);
    s.push(504);
    s.push(509);
    s.push(450);
    cout << "s.top" << s.top();
    s.pop();
    cout << "calling showstack";
    showstack(s);
}

void showstack(stack<int> s)
{
    while (!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
}