#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res;
    cin >> n;
    res = n / 5;
    if (n % 5 > 0)
    {
        res++;
    }
    cout << res;

    return 0;
}

 