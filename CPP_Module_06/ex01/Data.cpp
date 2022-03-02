#include "Data.hpp"

#include <iostream>

Data*	newData(std::string _name, float _x, float _y, int _hp, int _mp) {
	Data*	data = new Data();

	data->name = _name;
	data->x = _x;
	data->y = _y;
	data->hp = _hp;
	data->mp = _mp;

	return data;
}

std::ostream& operator<<(std::ostream& os, Data const & obj) {
	os << "name  : " << obj.name << std::endl
		<< "x pos : " << obj.x << std::endl
		<< "y pos : " << obj.y << std::endl
		<< "hp    : " << obj.hp << std::endl
		<< "mp    : " << obj.mp;
	return os;
}
