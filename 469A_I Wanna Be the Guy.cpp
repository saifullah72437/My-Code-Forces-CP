#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<bool> levelPassed(n + 1, false); // +1 for 1-based indexing

    int p;
    std::cin >> p;
    for (int i = 0; i < p; ++i)
    {
        int level;
        std::cin >> level;
        levelPassed[level] = true;
    }

    int q;
    std::cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int level;
        std::cin >> level;
        levelPassed[level] = true;
    }

    if (std::all_of(levelPassed.begin() + 1, levelPassed.end(), [](bool passed)
                    { return passed; }))
    {
        std::cout << "I become the guy." << std::endl;
    }
    else
    {
        std::cout << "Oh, my keyboard!" << std::endl;
    }

    return 0;
}