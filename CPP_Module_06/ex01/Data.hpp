#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data {
private:
	std::string	name;
	float		x;
	float		y;
	int			hp;
	int			mp;
	
	Data(void);

public:
	std::string	getName(void) const;
	float		getPosX(void) const;
	float		getPosY(void) const;
	int			getHP(void) const;
	int			getMP(void) const;

	Data(std::string _name, float _x, float _y, int _hp, int _mp);
	Data(Data const &);
	Data& operator=(Data const &);
	~Data();
};

std::ostream& operator<<(std::ostream&, Data const &);

uintptr_t	serialize(Data*);
Data*		deserialize(uintptr_t);

#endif