#include <iostream>

int main()
{

    // Example 1: Logical AND (&&)
    int num1 = 5;
    int num2 = 10;

    if (num1 > 0 && num2 > 0)
    {
        std::cout << "Both num1 and num2 are greater than 0.\n";
    }
    else
    {
        std::cout << "At least one of num1 or num2 is not greater than 0.\n";
    }

    // Example 2: Logical OR (||)
    bool isSunny = true;
    bool isWarm = false;

    if (isSunny || isWarm)
    {
        std::cout << "It's either sunny or warm (or both).\n";
    }
    else
    {
        std::cout << "It's neither sunny nor warm.\n";
    }

    // Example 3: Logical NOT (!)
    bool isRainy = false;

    if (!isRainy)
    {
        std::cout << "It's not rainy.\n";
    }
    else
    {
        std::cout << "It's rainy.\n";
    }

    return 0;
}