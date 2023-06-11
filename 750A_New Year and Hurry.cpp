#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    int totalMinutes = 4 * 60 - k; // Calculate the total minutes Limak has for solving problems
    int solvedProblems = 0;

    for (int i = 1; i <= n; i++)
    {
        int problemTime = 5 * i; // Time required to solve the i-th problem
        if (totalMinutes >= problemTime)
        {
            totalMinutes -= problemTime;
            solvedProblems++;
        }
        else
        {
            break; // Limak doesn't have enough time to solve the next problem
        }
    }

    std::cout << solvedProblems << std::endl;

    return 0;
}
