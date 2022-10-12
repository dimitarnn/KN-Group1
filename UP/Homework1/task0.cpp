#include <iostream>

int main()
{
    int n;
    int longest_seq = 0, tmp_seq = 0;
    std::cin >> n;

    while (n)
    {
        int rem = n % 2;
        n /= 2;

        if (rem)
            ++tmp_seq;
        else
        {
            longest_seq = std::max(tmp_seq, longest_seq);
            tmp_seq = 0;
        }
    }

    longest_seq = std::max(tmp_seq, longest_seq);
    std::cout << longest_seq << std::endl;


    return 0;

}