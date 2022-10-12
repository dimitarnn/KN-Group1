#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    // roof
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
            std::cout << ' ';
        
        std::cout << '/';

        for (int j = 0; j < 2 * (i - 1); ++j)
            std::cout << ' ';
        
        std::cout << '\\' << std::endl;
    }

    // line
    for (int i = 0; i < 2 * n; ++i)
        std::cout << '-';
    std::cout << std::endl;
    
    // base
    for (int i = 0; i < n; ++i)
    {
        std::cout << '|';

        for (int j = 0; j < 2 * n - 2; ++j)
            std::cout << ' ';
        
        std::cout << '|' << std::endl;
    }

    // line
    for (int i = 0; i < 2 * n; ++i)
        std::cout << '=';

    return 0;
}