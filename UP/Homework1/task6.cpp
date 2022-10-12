#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int cnt = 0;

    while (a && b)
    {
        int digit_a = a % 10;
        int digit_b = b % 10;

        cnt += (digit_a == digit_b);

        a /= 10;
        b /= 10;
    }

    std::cout << cnt << std::endl;

    return 0;
}