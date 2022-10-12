#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
            std::cout << ' ';
        for (int j = i + 1; j <= n; ++j)
            std::cout << j;
        std::cout << std::endl;
    }

    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j < i; ++j)
            std::cout << ' ';
        for (int j = i + 1; j <=n; ++j)
            std::cout << j;
        std::cout << std::endl;
    }

    return 0;
}