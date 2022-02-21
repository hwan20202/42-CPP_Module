#include "Data.hpp"

#include <iostream>

std::string	Data::getName(void) const {
	return name;
}

float		Data::getPosX(void) const {
	return x;
}

float		Data::getPosY(void) const {
	return y;
}

int			Data::getHP(void) const {
	return hp;
}

int			Data::getMP(void) const {
	return mp;
}

/****************************************/
/*					OCCF				*/
/****************************************/

Data::Data(void) {
	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(Data const & rhs) {
	std::cout << "Data copy constructor called" << std::endl;
	*this = rhs;
}

Data& Data::operator=(Data const & rhs) {
	std::cout << "Data assignation operator called" << std::endl;
	if (this != &rhs) {
		name = rhs.getName();
		x = rhs.getPosX();
		y = rhs.getPosY();
		hp = rhs.getHP();
		mp = rhs.getMP();
	}
	return *this;
}

Data::~Data() {
	std::cout << "Data destructor called" << std::endl;
}

/****************************************/
/*					others				*/
/****************************************/

Data::Data(std::string _name, float _x, float _y, int _hp, int _mp)
	:	name(_name), x(_x), y(_y), hp(_hp), mp(_mp) {
		std::cout << "Data standard constructor called" << std::endl;
	}


std::ostream& operator<<(std::ostream& os, Data const & obj) {
	os << "name : " << obj.getName() << std::endl
		<< "x pos : " << obj.getPosX() << std::endl
		<< "y pos : " << obj.getPosY() << std::endl
		<< "hp : " << obj.getHP() << std::endl
		<< "mp : " << obj.getMP() << std::endl;
	return os;
}

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
