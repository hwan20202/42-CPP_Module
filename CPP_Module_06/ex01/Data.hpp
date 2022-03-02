#ifndef DATA_HPP
#define DATA_HPP

#include <string>

typedef struct	s_Data {
	std::string	name;
	float		x;
	float		y;
	int			hp;
	int			mp;
}				Data;

Data*	newData(std::string _name, float _x, float _y, int _hp, int mp);

std::ostream& operator<<(std::ostream&, Data const &);

#endif