#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string	idea[100];
public:
	Brain(void);
	Brain(Brain const & obj);
	Brain	&operator=(Brain const & obj);
	~Brain(void);
};

#endif