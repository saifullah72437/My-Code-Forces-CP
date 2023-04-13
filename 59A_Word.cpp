#include <bits/stdc++.h>
using namespace std;

int main()
{
    int upperCount = 0, lowerCount = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowerCount++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upperCount++;
        }
    }

    // cout<<upperCount<<" "<<lowerCount<<endl;
    if (upperCount > lowerCount)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
    return 0;
}

 