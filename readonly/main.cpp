#include <iostream>

int main()
{
    /**
     * `const` - Constant
     * naming convention: uppercase with underscore
     */
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    double radius = 11;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}