#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int randNum = (rand() % 5) + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You lost. Try again next time.";
        break;
    case 2:
        std::cout << "You won nothing (:";
        break;
    case 3:
        std::cout << "You lost. Try again next time.";
        break;
    case 4:
        std::cout << "You lost. Try again next time.";
        break;
    case 5:
        std::cout << "You lost. Try again next time.";
        break;
    }

    return 0;
}