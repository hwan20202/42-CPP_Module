#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#define MSGCOUNT	4

class Karen {
private:
	static std::string	funcMap[MSGCOUNT + 1];

	void				debug(void);
	void				info(void);
	void				warning(void);
	void				error(void);
	void				insignificant(void);

public:
	void	complain(std::string level);

	Karen(void);
	~Karen(void);
};

#endif