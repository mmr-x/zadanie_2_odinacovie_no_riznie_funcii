#include <iostream>

namespace addition
{
    int calculate( int x, int y )
    {
        return x + y;
    }
}

namespace subtraction
{
    int calculate( int x, int y )
    {
        return x - y;
    }
}

namespace multiplication
{
    int calculate( int x, int y )
    {
        return x * y;
    }
}

namespace division
{
    int calculate( int x, int y )
    {
        return x / y;
    }
}

int main( )
{
    int x = 6, y = 9;

    std::cout << "addition: " << addition::calculate( x, y ) << std::endl;
    std::cout << "subtraction: " << subtraction::calculate( x, y ) << std::endl;
    std::cout << "multiplication: " << multiplication::calculate( x, y ) << std::endl;
    std::cout << "division: " << division::calculate( x, y ) << std::endl;

    return 0;
}