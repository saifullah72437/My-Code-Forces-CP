#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

int main()
{
    int n, sum;
    string str;

    while (cin >> n)
    {
        sum = 0;

        while (n--)
        {
            cin >> str;

            if (str == "Tetrahedron")
                sum += 4;
            else if (str == "Cube")
                sum += 6;
            else if (str == "Octahedron")
                sum += 8;
            else if (str == "Dodecahedron")
                sum += 12;
            else if (str == "Icosahedron")
                sum += 20;
        }

        cout << sum << endl;
    }
}