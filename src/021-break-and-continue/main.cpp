#include <iostream>

int main()
{
    for (int i = 0; i < 20; i++)
    {
        if (i == 10 || i == 15)
        {
            continue;
        }

        if (i == 18)
        {
            break;
        }

        std::cout << i << '\n';
    }

    return 0;
}