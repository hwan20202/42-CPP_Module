#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	std::string	string_precision(std::string s, unsigned int precision);
public:
	int		set(void);
	void	brief(void);
	void	detail(void);

	Contact(void);
	~Contact(void);
};

#endif
