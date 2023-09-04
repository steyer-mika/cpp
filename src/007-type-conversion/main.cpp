#include <iostream>

int main()
{
    double x = 3.14;
    std::cout << "double x: " << x << '\n';

    int y = (int)x;
    std::cout << "int y: " << y << '\n';

    std::cout << "cast 100 into char: " << (char)100;

    return 0;
}