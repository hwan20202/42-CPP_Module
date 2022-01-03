#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>

#include "contact.hpp"

#define	PHONEBOOKSIZE	8
#define WIDTH			60

class phoneBook
{
private:
	int		size;
	int		latest;
	int		width;
	contact	contacts[PHONEBOOKSIZE];

	void	title(std::string content);
	void	termAndDescribtion(int termSize, std::string term, std::string describ);
	void	briefTable(void);
	int		add(void);
	int		search(void);

public:
	int		run(void);

	phoneBook(void);
	~phoneBook(void);
};


#endif