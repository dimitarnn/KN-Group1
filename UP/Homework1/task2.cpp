#include <iostream>

int main()
{
    int a, b;
    int cnt = 0;
    std::cin >> a >> b;

    for (int i = a; i <= b; ++i)
    {
        int product = 1;
        int sum = 0;
        int tmp = i;

        while (tmp)
        {
            int digit = tmp % 10;
            tmp /= 10;
            sum += digit;
            product *= digit;
        }

        if (sum == product)
            ++cnt;
    }

    std::cout << cnt << std::endl;

    return 0;
}