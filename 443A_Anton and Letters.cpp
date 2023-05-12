#include <bits/stdc++.h>
using namespace std;

int main()
{
    // divisibility problem
    char n;
    set<char> s;
    while (cin >> n)
    {
        if (n == '{' or n == ',' or n == '}')
        {
            continue;
        }
        s.insert(n);
    }
    cout << s.size();
    return 0;
}