#include "Fixed.hpp"
#include <iostream>

int main(void)
{
    float   af(10.10);
    const float   bf(11);

    // Fixed   aF(af);
    // Fixed   bF(bf);

    // int tmp;

    std::cout << fmin(af, bf) << std::endl;

    // std::cout << std::bitset<32>(af) << std::endl;
    // tmp = af * (1 << 8);
    // std::cout << std::bitset<32>(tmp) << std::endl;
    // tmp = af * (1 << 12);
    // std::cout << std::bitset<32>(tmp) << std::endl;
    // tmp = af * (1 << 16);
    // std::cout << std::bitset<32>(tmp) << std::endl;
    // tmp = af * (1 << 20);
    // std::cout << std::bitset<32>(tmp) << std::endl;


    // // std::cout << "aF : " << aF << std::endl;
    // std::cout << "aF : " << std::bitset<32>(aF.getRawBits()) << std::endl;

    // ++aF;
    // aF++;
    // aF++;
    // std::cout << "bF : " << bF << std::endl;
    // std::cout << aF - bF << std::endl;
    // std::cout << af - bf << std::endl;
    // Fixed a;
    // Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );

    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}