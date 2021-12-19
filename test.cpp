#include <iostream>
#include <bitset>
#include <cmath>

int main(void)
{
	int num = 1;
    int num2;

    std::cout << std::bitset<32>(num) << std::endl;
    num2 = num << 8;
    std::cout << std::bitset<32>(num2) << std::endl;
	
	return (0);
}