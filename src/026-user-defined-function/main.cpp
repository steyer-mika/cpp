#include <iostream>

// define function
void doSomething(std::string label);

int main()
{
    std::string something = "something";
    std::string nothing = "nothing";

    // call function
    doSomething(something);
    doSomething(nothing);
    doSomething(something);

    return 0;
}

// implement function
void doSomething(std::string label)
{
    std::cout << "Do " << label << '\n';
}