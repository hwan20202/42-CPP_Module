#include <iostream>

namespace jeokim
{
	class megaphone
	{
	public:
		int	toBigger(void)
		{
			std::string str;
			int	ret;

			ret = 0;
			// while (1)
			// {
			// 	std::cin >> str;
			// 	ret += toBigger(str);
			// }
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
			return (ret);
		}

		int toBigger(std::string str)
		{
			int	idx;

			idx = 0;
			while (idx < str.size())
				std::cout << (char)toupper(str.at(idx++));
			return (str.size());
		}
	};
}

int	main(int argc, char **argv)
{
	int idx;
	int	ret;
	jeokim::megaphone mega;

	idx = 1;
	ret = 0;
	if (argc > 1)
	{
		while (idx < argc)
			ret += mega.toBigger(argv[idx++]);
		std::cout << std::endl;
	}
	else
	{
		ret += mega.toBigger();
	}
	return (ret);
}