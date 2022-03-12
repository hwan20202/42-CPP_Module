#include <iostream>

template <typename T>
class Base {
protected:
	T num;
};

template <typename T>
class Derived: public Base<T> {
public:
	T getNum() { return this->num; }
};

int main() {
	Derived<int> d;

	std::cout << d.getNum() << std::endl;
	return 0;
}

