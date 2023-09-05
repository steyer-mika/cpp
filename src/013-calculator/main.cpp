#include <iostream>

int main()
{
    char operation;
    double num1, num2;

    std::cout << "Simple C++ Calculator\n";
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Result: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result: " << result << '\n';
        break;
    case '/':
        if (num2 == 0)
        {
            std::cout << "Error: Division by zero!\n";
        }
        else
        {
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
        }
        break;
    default:
        std::cout << "Invalid operation. Please enter +, -, *, or /.\n";
        break;
    }

    return 0;
}
