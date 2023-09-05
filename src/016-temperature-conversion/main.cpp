#include <iostream>

int main()
{

    double temp;
    char unit;

    std::cout << "***** Temperature Conversion *****\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    switch (unit)
    {
    case 'F':
    case 'f':
        std::cout << "Enter the Temperature in Celsius\n";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;

        std::cout << "Temperature is " << temp << "F\n";
        break;

    case 'C':
        std::cout << "Enter the Temperature in Fahrenheit\n";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;

        std::cout << "Temperature is " << temp << "C\n";
    case 'c':
        break;

    default:
        std::cout << "Error: You didn't provide a valid unit to convert to.\n";
        break;
    }

    std::cout << "**********************************";

    return 0;
}