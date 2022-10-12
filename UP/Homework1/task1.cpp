#include <iostream>
#include <cmath>

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::cout << (int)(log10(n) / log10(k)) << std::endl;


    return 0;

}