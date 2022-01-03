#include "phoneBook.hpp"
#include <cctype>

int		phoneBook::add(void)
{
	title("<< Adding Contact >>");
	latest = (latest + 1) % PHONEBOOKSIZE;
	if (contacts[(latest % PHONEBOOKSIZE)].set())
		return 1;
	if (size + 1 <= PHONEBOOKSIZE)
		size++;
	title("<< Complete >>");
	return 0;
}

int		phoneBook::search(void)
{
	char idx;

	title("<< Searching Contact >>");
	title("<< Select the contact you want to see in detail >>");
	briefTable();
	title("");
	std::cout << "Selection Number : ";
	std::cin >> idx;
	if (std::cin.fail()) {
		return 1;
	}
	if (idx > '0' && idx <= size + '0') {
		title("<< detail >>");
		contacts[(latest + size + idx - '0') % size].detail();
	} else
		std::cout << "wrong input" << std::endl;
	title("");
	return 0;
}


int		phoneBook::run(void) {
	std::string line;

	title("<< phoneBook has been run >>");
	std::cout << "you can use following command" << std::endl;
	title("<< COMMAND >>");
	termAndDescribtion(8, "[ADD]", "Adding contact to phone book");
	termAndDescribtion(8, "[SEARCH]", "Briefing contacts and select the one you want to see in detail");
	title("");
	while (true)
	{
		std::cout << "COMMAND > ";
		std::cin >> line;
		if (std::cin.eof() || std::cin.fail() || line == "EXIT")
			break ;
		if (line == "ADD") {
			if (add())
				return 1;
		} else if (line == "SEARCH") {
			if (search())
				return 1;
		} else
			std::cout << "command that doesn't exist" << std::endl;
	}
	std::cout << line << " : program has exited." << std::endl;
	return 0;
}

void	phoneBook::title(std::string content) {
	for (unsigned long i = 0; i < (width - content.size()) / 2; i++)
		std::cout << "=";
	std::cout << content;
	for (unsigned long i = 0; i < width - content.size() - (width - content.size()) / 2; i++)
		std::cout << "=";
	std::cout << std::endl;
}

void	phoneBook::termAndDescribtion(int termSize, std::string term, std::string describ) {
	std::cout << std::left << std::setw(termSize)
				<< term << " : " << describ << std::endl;
}

void	phoneBook::briefTable(void) {
	std::cout << std::right << "|" << std::setfill(' ')
				<< std::setw(10) << "index" << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|" 
				<< std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << std::right << "|" << std::setw(10) << i + 1;
		contacts[(latest + size + 1 + i) % size].brief();
	}
}

phoneBook::phoneBook()
{
	size = 0;
	latest = -1;
	width = WIDTH;
}

phoneBook::~phoneBook()
{
}

