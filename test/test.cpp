#include <iostream>
#include <typeinfo>

template <typename T>
void	pnum(T num) {
	std::cout << num << std::endl;
}

template<typename T>
void	num(T a, void (*fp)(T const &)) {

	fp(a);
}

int main() {
	void (*fp)(int const &) = pnum<int const &>;


	fp(10);
	return 0;
}