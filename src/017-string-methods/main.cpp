#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.append("@gmail.com");

    std::cout << "Your email would be " << name << '\n';

    std::cout << "The first character of your name is " << name.at(0) << '\n';

    name.erase(name.find('@'), name.length() - 1).insert(0, "@");

    std::cout << "Your username would be " << name << '\n';

    name.clear();

    return 0;
}