#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int row = 1; row <= n; ++row)
    {
        for (int col = 0; col < row; ++col)
            std::cout << '#';
        std::cout << std::endl;
    }

    return 0;
}