#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int p;
    while (n--)
    {
        cin >> p;
        if (p == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";

    return 0;
}