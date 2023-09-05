#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";

    std::cin >> age;

    if (age < 0)
    {
        std::cout << "Your age seems sus.";
    }
    else if (age >= 18)
    {
        std::cout << "Your old enough.";
    }
    else
    {
        std::cout << "Your not old enough";
    }

    return 0;
}