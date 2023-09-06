#include <iostream>

int main()
{

    int x = 5;
    int y = 10;

    {
        int x = 6;

        // use x in scope
        std::cout << x << " & " << y << '\n';

        int y = 11;
    }

    std::cout << x << " & " << y;

    return 0;
}