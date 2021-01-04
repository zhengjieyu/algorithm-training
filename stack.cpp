#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int stk[N], top;
int m;
int main()
{
    cin >> m;
    while(m --)
    {
        string op;
        int x;
        cin >> op;
        if(op == "push")
        {
            cin >> x;
            stk[top ++] = x;
        }
        else if(op == "pop")
        {
            top --;
        }
        else if(op == "empty")
        {
            cout << (top ? "NO" : "YES") << endl;
        }
        else
        {
            cout << stk[top] << endl;
        }
    }
    return 0;
}