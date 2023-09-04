#include <iostream>
#include <vector>

/**
 * `typedef` - Type Alias
 * syntax: typedef type alias
 * convention: ends with _t
 */
typedef std::string text_t;

/**
 * `using` - Type Alias
 * syntax: using type = alias
 * convention: ends with _t
 */
using number_t = int;

// using should be preferred over typedef
using pairList_t = std::vector<std::pair<std::string, int>>;

int main()
{
    text_t text = "Lorem ipsum";
    std::cout << text;

    std::cout << "\n";

    number_t age = 18;
    std::cout << age;

    pairList_t pairList;

    return 0;
}