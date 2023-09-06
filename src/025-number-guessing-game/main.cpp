#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int num;
    int guess;
    int tries = 0;

    num = (rand() % 100) + 1;

    do
    {
        std::cout << "Enter a guess between 1 - 100: ";
        std::cin >> guess;

        tries++;

        if (guess > num)
        {
            std::cout << "To High\n";
        }
        else if (guess < num)
        {
            std::cout << "To Low\n";
        }
        else if (guess == num)
        {
            std::cout << "Correct # of tries: " << tries;
        }

    } while (guess != num);

    return 0;
}