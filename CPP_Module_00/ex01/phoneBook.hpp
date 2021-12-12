#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>

#define	PHONEBOOKSIZE 8

class contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::string	string_precision(std::string s, unsigned int precision);
public:
	void	set(void);
	void	brief(void);
	void	detail(void);

	contact(void);
	~contact(void);
};

class phoneBook
{
private:
	int		size;
	int		latest;
	contact	contacts[PHONEBOOKSIZE];
public:
	void	add(void);
	void	search(void);

	phoneBook(void);
	~phoneBook(void);
};

#endif