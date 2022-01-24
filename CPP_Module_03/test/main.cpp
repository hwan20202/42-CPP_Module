// #include "ScavTrap.hpp"
#include <iostream>

int a = 0;

class Base
{
private:
	int num;
public:

	void	foo(int num);
	int		getNum(void);
	Base(/* args */);
	~Base();
};

int		Base::getNum(void) {
	return num;
}


void	Base::foo(int n) {
	std::cout << "Base :: " << n << std::endl;
}


Base::Base(/* args */)
{
}

Base::~Base()
{
}

class Derived : public Base
{
private:
	/* data */
	int num;
public:

	void	foo(std::string s);
	int		getNum(void);

	Derived(/* args */);
	~Derived();
};


int		Derived::getNum(void) {
	return num;
}


void	Derived::foo(std::string s) {
	std::cout << s << std::endl;
}

Derived::Derived(/* args */)
{
}

Derived::~Derived()
{
}




int main(void)
{
	int a = 1;
	Base b;
	Derived d;

	d.foo("hihi");
	// d.foo(5);
	std::cout << a;
	return 0;
}