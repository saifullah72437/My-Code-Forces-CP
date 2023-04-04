#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int row, col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    row = row + 1;
    col = col + 1;
    int res = abs(3 - row) + abs(3 - col);
    cout << res;
    return 0;
}

 