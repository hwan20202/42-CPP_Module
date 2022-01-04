#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>

#include "Contact.hpp"

#define	PHONEBOOKSIZE	8
#define WIDTH			60

class PhoneBook {
private:
	int		size;
	int		latest;
	int		width;
	Contact	contacts[PHONEBOOKSIZE];

	void	title(std::string content);
	void	termAndDescribtion(int termSize, std::string term, std::string describ);
	void	briefTable(void);
	int		add(void);
	int		search(void);
public:
	int		run(void);

	PhoneBook(void);
	~PhoneBook(void);
};

#endif
