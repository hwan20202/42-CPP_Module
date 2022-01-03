#include "test.hpp"

One::One() 
{
	std::cout << "One Default constructor called" << std::endl;
}

One::One(std::string s)
{
	std::cout << s << " : " << "One general constructor called" << std::endl;
}

TwoA::TwoA() : One()
{
	std::cout << "TwoA Default constructor called" << std::endl;
}

TwoA::TwoA(std::string s) : One(s)
{
	std::cout << s << " : " << "TwoA general constructor called" << std::endl;
}

TwoB::TwoB() : One()
{
	std::cout << "TwoB Default constructor called" << std::endl;
}

TwoB::TwoB(std::string s) : One(s)
{
	std::cout << s << " : " << "TwoB general constructor called" << std::endl;
}
Three::Three() : TwoA(), TwoB()
{
	std::cout << "Three Default constructor called" << std::endl;
}

Three::Three(std::string s1, std::string s2) : One(s1), TwoA(s1), TwoB(s2)
{
	std::cout << "Three general constructor called" << std::endl;
}
