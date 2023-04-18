#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int countA = 0, countB = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            countA++;
        }
        else if (s[i] == 'D')
        {
            countB++;
        }
    }

    if (countA > countB)
    {
        cout << "Anton";
    }
    else if (countA < countB)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}