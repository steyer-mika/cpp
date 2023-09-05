#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    const int MAX = 6;

    int num = (rand() % MAX) + 1;

    std::cout << num;

    return 0;
}