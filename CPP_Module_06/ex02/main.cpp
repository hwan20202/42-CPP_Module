#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>

Base*	generate(void) {
	int	id;

	id = rand() % 3;

	switch (id)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		throw std::exception();
	}
}

void	identify(Base* p) {

}

void	identify(Base& p) {

}

int	main(void) {

	return 0;
}