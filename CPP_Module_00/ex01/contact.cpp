#include "contact.hpp"

std::string	contact::string_precision(std::string str, unsigned int precision) {
	if (str.size() >= precision)
		return str.substr(0, 9) += ".";
	return str;
}

int		contact::set(void) {
	std::string		msg[5] = { "Input the first name",
								"Input the last name",
								"Input the nickname",
								"Input the phone number",
								"Input the darkest secret" };
	std::string		*ref[5] = { &firstName,
								&lastName,
								&nickname,
								&phoneNumber,
								&darkestSecret };

	for (int i = 0; i < 5; i++) {
		std::cout << std::left;
		std::cout << std::setw(32) << msg[i] << " : ";
		std::cin >> *ref[i];
		if (std::cin.eof() || std::cin.fail())
			return 1;
	}
	return 0;
}

void	contact::brief(void)
{
	std::setfill(' ');
	std::cout << std::right;
	std::cout << "|" << std::setw(10);
	std::cout << string_precision(firstName, 10);
	std::cout << "|" << std::setw(10);
	std::cout << string_precision(lastName, 10);
	std::cout << "|" << std::setw(10);
	std::cout << string_precision(nickname, 10) << "|" << std::endl;
}

void	contact::detail(void) {
	std::cout << std::left;
	std::cout << std::setw(14) << "first name" << " : " << firstName << std::endl; 
	std::cout << std::setw(14) << "last name" << " : " << lastName << std::endl;
	std::cout << std::setw(14) << "nickname" << " : " << nickname << std::endl;
	std::cout << std::setw(14) << "phone number" << " : " << phoneNumber << std::endl;
	std::cout << std::setw(14) << "darkest secret" << " : " << darkestSecret << std::endl;
}

contact::contact() {

}

contact::~contact() {
}

