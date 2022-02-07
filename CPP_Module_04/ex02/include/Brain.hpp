#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
private:
	std::string	idea[100];
public:
	std::string	getIdea(int idx);
	void		setIdea(int idx, std::string content);

	Brain(void);
	Brain(Brain const & obj);
	Brain&	operator=(Brain const & obj);
	~Brain(void);
};

#endif