#include <iostream>
#include <cmath>

int main()
{
    // Minimum and Maximum functions
    std::cout << "min of 3 and 4: " << std::min(3, 4) << '\n';
    std::cout << "max of 3 and 4: " << std::max(3, 4) << '\n';

    int a = pow(4, 3);
    std::cout << "4 to the power of 3 is: " << a << '\n';

    int b = sqrt(9);
    std::cout << "square root of 9 is: " << b << '\n';

    int c = abs(-99);
    std::cout << "the absolute value of -99 is: " << c << '\n';

    const double PI = 3.14;

    // Rounds PI to the nearest integer (result: 3)
    double d = round(PI);
    std::cout << "Pi rounded is " << d << '\n';

    // Rounds up PI to the nearest integer (result: 4)
    double e = ceil(PI);
    std::cout << "Ceiling of Pi is " << e << '\n';

    // Rounds down PI to the nearest integer (result: 3)
    double f = floor(PI);
    std::cout << "Floor of Pi is " << f << '\n';

    return 0;
}
