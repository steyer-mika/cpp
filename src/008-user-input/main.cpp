#include <iostream>

int main()
{
    // initialize variables
    std::string name;
    int age;

    // display label
    std::cout << "Hello, what's your age?: ";

    // get user input
    std::cin >> age;

    // display label
    std::cout << "Enter your full name: ";

    // use getline to accept user input with white spaces#
    // clear the input buffer with `>> std::ws`
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello my friend " << name << '\n';
    std::cout << "You are " << age << " years old.";

    return 0;
}