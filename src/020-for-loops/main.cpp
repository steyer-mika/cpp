#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << i + 1 << '\n';
    }

    std::cout << "***\n";

    for (int i = 10; i >= 0; i -= 2)
    {
        std::cout << i << '\n';
    }

    return 0;
}