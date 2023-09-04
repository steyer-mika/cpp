#include <iostream>

/**
 * `namespace` - Create Namespace
 */
namespace alpha
{
    int x = 4;
}

namespace beta
{
    int x = 2;
}

/**
 * `using namespace` - set default Namespace
 */
using namespace std;

int main()
{
    int x = 5;

    /**
     * `namespace::variable` - use variable in namespace
     */
    cout << x * alpha::x * beta::x;

    return 0;
}