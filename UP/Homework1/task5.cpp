#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int tmp = 1;

    for (int row = 1; tmp <= n; ++row)
    {
        for (int i = 0; i < row && tmp <= n; ++i)
            std::cout << tmp++ << " ";
        
        std::cout << std::endl;
    }

    return 0;
}