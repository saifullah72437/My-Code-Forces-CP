#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    for (int i = 1; i <= k; i++)
    {
        int res = n % 10;

        if (res != 0)
        {
            n -= 1;
        }
        else
        {
            n /= 10;
        }
    }

    cout << n;
    return 0;
}

 