#include "phoneBook.hpp"
#include <iostream>

class contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
public:
	void	cinFirstName(void);
	void	cinLastName(void);
	void	cinNicktname(void);
	void	cinPhoneNumber(void);
	void	cinDarkestSecret(void);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);

	contact(void);
	~contact(void);
};

contact::contact()
{
}

contact::~contact()
{
}

class phoneBook
{
private:
	std::string	cmd;
	int cmdMode;
	contact buf;
	contact	contacts[8];
public:
	void	command(void);
	void	modePrompt(void);

	
	phoneBook(void);
	~phoneBook(void);
};

void	phoneBook::command(void)
{
	if (cmdMode == DEFALT)
	{
		if (cmd == "ADD")
			addMode();
		else if (cmd == "SEARCH")
			searchMode();
		else if (cmd == "EXIT")
			;
	}
	if (cmdMode == SEARCH)
	{
		if (isdigit(cmd))
			;//show contact
		else
			; //escape SEARCH MODE
	}
}

void	phoneBook::addMode(void)
{
	if (cmdMode != ADD)
		cmdMode = ADD
	buf.clean();
	modePrompt();
	buf.cinFirstName();
	buf.cinLastName();
	buf.cinNickname();
	buf.cinPhoneNumber();
	buf.cinDarkestSecret();
	contacts.end() = buf;
}

void	phoneBook::searchMode(void)
{
	for (int i = 0; i < size; i++) // get first
	{
		std::cout << "|" << contacts[(first + i) % 8].getFirstName(); //briefly
		std::cout << "|" << contacts[(first + i) % 8].getLastName(); //briefly
		std::cout << "|" << contacts[(first + i) % 8].getNickname(); //briefly
		std::cout << "|" << contacts[(first + i) % 8].getPhoneNumber(); //briefly
		std::cout << "|" << contacts[(first + i) % 8].getDarkestSecret(); //briefly
		std::cout << "|" << std::endl;
	}

}

phoneBook::phoneBook(/* args */)
{
}

phoneBook::~phoneBook()
{
}

