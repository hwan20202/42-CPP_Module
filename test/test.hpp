#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>

class One {
public:
	std::string name;

	One(void);
	One(std::string s);
};

class TwoA : virtual public One {
public:
	int stamina;

	TwoA(void);
	TwoA(std::string s);
};

class TwoB : virtual public One {
public:
	int mana;
	TwoB(void);
	TwoB(std::string s);
};

class Three : public TwoA, public TwoB {
public:
	Three(void);
	Three(std::string s1, std::string s2);
};


#endif