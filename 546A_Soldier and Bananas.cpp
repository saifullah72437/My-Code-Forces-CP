#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    long long sum = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        // cout<<k*i<<endl;
        // k+=(k*i);
        sum += (k * i);
    }
    if (sum <= n)
    {
        cout << 0 << "\n";
    }
    else
        cout << sum - n << "\n";
    return 0;
}

 