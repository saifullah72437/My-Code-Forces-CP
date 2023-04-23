#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, h;
    cin >> n >> h;
    int no;
    int count = 0;
    while (n--)
    {
        cin >> no;

        if (no <= h)
        {
            count += 1;
        }
        else
        {
            count += 2;
        }
    }
    cout << count;
    return 0;
}