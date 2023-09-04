#include <iostream>

int main()
{
    int bookCount = 20;

    std::cout << "current book count: " << bookCount << '\n';

    /**
     * Addition
     * operator: +
     * description: The addition operator (+) is used to add two values together.
     */

    // long version:
    // bookCount = bookCount + 3;

    // short version:
    bookCount += 3;

    std::cout << "book count after buying new books: " << bookCount << '\n';

    /**
     * Subtraction
     * operator: -
     * description: The subtraction operator (-) is used to subtract the right operand from the left operand.
     */

    // long version:
    // bookCount = bookCount - 1;

    // shorter version:
    // bookCount -= 1;

    // shortest version:
    bookCount--;

    std::cout << "book count after losing a book: " << bookCount << '\n';

    /**
     * Multiplication
     * operator: *
     * description: The multiplication operator (*) is used to multiply two values together.
     */

    int costPerBook = 10;
    int totalPrice = bookCount * costPerBook;

    std::cout << "Total cost of all books: " << totalPrice << '\n';

    /**
     * Division
     * operator: /
     * description: The division operator (/) is used to divide the left operand by the right operand.
     */

    int budget = 105;
    int booksToBuy = budget / costPerBook;

    std::cout << "Number of books you can buy with $" << budget << ": " << booksToBuy << '\n';

    /**
     * Modulo
     * operator: %
     * description: The modulo operator (%) returns the remainder when the left operand is divided by the right operand.
     */

    int remainder = budget % costPerBook;

    std::cout << "Remaining money after buying books: $" << remainder << '\n';

    /**
     * Parentheses
     * operator: ()
     * description: Parentheses are used to group expressions and specify the order of operations (precedence).
     */

    int result = (bookCount + 5) * 2;

    std::cout << "Result of (bookCount + 5) * 2: " << result << '\n';

    return 0;
}
