#include <iostream>

namespace calculation
{
    int add( int x, int y )
    {
        return x + y;
    }

    int subtract( int x, int y )
    {
        return x - y;
    }

    int multiply( int x, int y )
    {
        return x * y;
    }

    int divide( int x, int y )
    {
        return x / y;
    }
}

int main( )
{
    int x = 6, y = 9;

    std::cout << "addition: " << calculation::add( x, y ) << std::endl;
    std::cout << "subtraction: " << calculation::subtract( x, y ) << std::endl;
    std::cout << "multiplication: " << calculation::multiply( x, y ) << std::endl;
    std::cout << "division: " << calculation::divide( x, y ) << std::endl;

    return 0;
}