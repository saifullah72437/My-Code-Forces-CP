#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4], e = 3;

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            e--;
        }
    }

    cout << e;
    return 0;
}