#include <iostream>

int main(void)
{
	int count;

	count = 1;
	std::string s;
	while (1)
	{
		std::cin >> s;
		if (std::cin.eof())
		{
			std::cout << "cin eof." << std::endl;
			std::cout << s << std::endl;
			break ;
		}
		if (std::cin.fail())
		{
			std::cout << "cin fail." << std::endl;
			break ;
		}
		std::cout << count++ << s <<std::endl;
	}
	return (0);
}