#include "phoneBook.hpp"
#include <cctype>

std::string	contact::string_precision(std::string str, unsigned int precision)
{
	if (str.size() >= precision)
		return (str.substr(0, 9) += ".");
	return (str);
}

void	contact::set(void)
{
	std::cout << "====================" << "ADD CONTACT" << "====================" << std::endl;
	std::cout << std::left;
	std::cout << std::setw(32) << "Please, input the first name" << " : ";
	std::cin >> firstName;
	std::cout << std::setw(32) << "Please, input the last name" << " : ";
	std::cin >> lastName;
	std::cout << std::setw(32) << "Please, input the nickname" << " : ";
	std::cin >> nickname;
	std::cout << std::setw(32) << "Please, input the phone number" << " : ";
	std::cin >> phoneNumber;
	std::cout << std::setw(32) << "Please, input the darkest secret" << " : ";
	std::cin >> darkestSecret;
	std::cout << "====================" << "ADD COMPLETE" << "===================" << std::endl;
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

void	contact::detail(void)
{
	std::cout << "=================" << firstName << "'s contact" << "=================" << std::endl;
	std::cout << std::left;
	std::cout << std::setw(14) << "first name" << " : " << firstName << std::endl; 
	std::cout << std::setw(14) << "last name" << " : " << lastName << std::endl;
	std::cout << std::setw(14) << "nickname" << " : " << nickname << std::endl;
	std::cout << std::setw(14) << "phone number" << " : " << phoneNumber << std::endl;
	std::cout << std::setw(14) << "darkest secret" << " : " << darkestSecret << std::endl;
	std::cout << "===================================================" << std::endl;
}

contact::contact()
{
}

contact::~contact()
{
}


void	phoneBook::add(void)
{
	latest = (latest + 1) % PHONEBOOKSIZE;
	contacts[(latest % PHONEBOOKSIZE)].set();
	if (size + 1 <= PHONEBOOKSIZE)
		size++;
}

void	phoneBook::search(void)
{
	char idx;

	std::cout << "===================" << "CONTACT BRIEF" << "==================" << std::endl;
	std::cout << std::right << "|" << std::setfill(' ') << std::setw(10) << "index" << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|" 
				<< std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << std::right << "|" << std::setw(10) << i + 1;
		contacts[(latest + size + 1 + i) % size].brief();
	}
	std::cout << "===================================================" << std::endl;
	std::cout << "Select the contact you want to see in detail : ";
	std::cin >> idx;
	if (idx > '0' && idx <= size + '0')
		contacts[(latest + size + idx - '0') % size].detail();
	else
		std::cout << "wrong input" << std::endl;
}

phoneBook::phoneBook()
{
	size = 0;
	latest = -1;
}

phoneBook::~phoneBook()
{
}

