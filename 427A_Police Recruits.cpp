#include <iostream>
#include <vector>

int countUntreatedCrimes(const std::vector<int> &events)
{
    int untreatedCrimes = 0;
    int freeOfficers = 0;

    for (int event : events)
    {
        if (event == -1)
        {
            if (freeOfficers == 0)
            {
                untreatedCrimes++;
            }
            else
            {
                freeOfficers--;
            }
        }
        else
        {
            freeOfficers += event;
        }
    }

    return untreatedCrimes;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> events(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> events[i];
    }

    int result = countUntreatedCrimes(events);

    std::cout << result << std::endl;

    return 0;
}
