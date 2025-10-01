#include <iostream>

int calc_adt( int x, int y )
{
    int returned = x + y;

    return returned;
}

int calc_sb( int x, int y )
{
    int returned = x - y;

    return returned;
}

int calc_mp( int x, int y )
{
    int returned = x * y;

    return returned;
}

int calc_ds( int x, int y )
{
    int returned = x / y;

    return returned;
}

int main( )
{
    // использовал переводчик ( могут быть ошибки )
    int x = 6, y = 9;

    std::cout << "addition: " << calc_adt( x, y ) << std::endl;
    std::cout << "subtraction: " << calc_sb( x, y ) << std::endl;
    std::cout << "multiplication: " << calc_mp( x, y ) << std::endl;
    std::cout << "division: " << calc_ds( x, y ) << std::endl;

    return 0;
}