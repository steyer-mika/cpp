#include <iostream>

int main()
{

    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << (num % 2 == 1 ? "Your number is odd" : "Your number is even");

    return 0;
}