#include <iostream>
#include <vector>

int countAmazingPerformances(const std::vector<int> &points)
{
    int amazingCount = 0;
    int minPoints = points[0];
    int maxPoints = points[0];

    for (int i = 1; i < points.size(); ++i)
    {
        if (points[i] < minPoints)
        {
            minPoints = points[i];
            ++amazingCount;
        }
        else if (points[i] > maxPoints)
        {
            maxPoints = points[i];
            ++amazingCount;
        }
    }

    return amazingCount;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> points(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> points[i];
    }

    int amazingCount = countAmazingPerformances(points);
    std::cout << amazingCount << std::endl;

    return 0;
}
