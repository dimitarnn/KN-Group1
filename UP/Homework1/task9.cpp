#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    for (int i = a; i < b; ++i)
    {
        int tmp = i;
        int sum_even = 0;
        int sum_odd = 0;
        int product_even = 1;
        int product_odd = 1;

        while (tmp)
        {
            int odd_digit = tmp % 10;
            tmp /= 10;

            sum_odd += odd_digit;
            product_odd *= odd_digit;

            int even_digit = tmp % 10;
            tmp /= 10;

            sum_even += even_digit;
            product_even *= even_digit;
        }

        if (sum_even == sum_odd && product_even == product_odd)
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}