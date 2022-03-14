#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base*	generate(void) {
	int	id;

	id = rand() % 3;

	switch (id)
	{
	case 0:
		std::cout << "generate class A" << std::endl;
		return new A();
	case 1:
		std::cout << "generate class B" << std::endl;
		return new B();
	case 2:
		std::cout << "generate class C" << std::endl;
		return new C();
	default:
		return 0;
	}
}

void	identify(Base* p) {
	if (!p)
		std::cout << "argument is nullptr" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "class A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "class B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "class C" << std::endl;
}

bool	isClass(Base& p, char s) {
	try {
		switch (s)
		{
		case 'A':
			static_cast<void>(dynamic_cast<A&>(p));
			return true;
		case 'B':
			static_cast<void>(dynamic_cast<B&>(p));
			return true;
		case 'C':
			static_cast<void>(dynamic_cast<C&>(p));
			return true;
		default:
			return false;
		}
	} catch(std::exception& e) {}
	return false;
}

void	identify(Base& p) {
	if (isClass(p, 'A'))
		std::cout << "class A" << std::endl;
	if (isClass(p, 'B'))
		std::cout << "class B" << std::endl;
	if (isClass(p, 'C'))
		std::cout << "class C" << std::endl;
}

void	test(void) {
	Base*	b1;
	Base*	b2;
	Base*	b3;

	b1 = generate();
	b2 = generate();
	b3 = generate();

	identify(0);
	identify(b1);
	identify(b2);
	identify(b3);

	identify(*b1);
	identify(*b2);
	identify(*b3);

	delete b1;
	delete b2;
	delete b3;
}

int		main() {
	test();

	return 0;
}