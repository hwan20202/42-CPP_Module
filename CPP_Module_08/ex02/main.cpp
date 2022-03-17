#include "mutantstack.hpp"
#include <iostream>
#include <list>

int	test_list();

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "mstack : " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	MutantStack<int> com(mstack);
	if (s == com) {
		std::cout << "stack 's' and Mutant stack 'com' are same" << std::endl;
	}
	else
	{
		std::cout << "hello" << std::endl;
		{
			MutantStack<int>::iterator it = com.begin();
			MutantStack<int>::iterator ite = com.end();
			while (it != ite)
			{
				std::cout << "s : " << *it << std::endl;
				++it;
			}
		}
	}
	test_list();
	return 0;
}

int	test_list() {
	std::list<int>		l;

	l.push_back(5);
	l.push_back(17);
	std::cout << "list back : " << l.back() << std::endl;
	l.pop_back();
	std::cout << "list size : " << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	std::list<int>::iterator it = l.begin();
	std::list<int>::iterator ite = l.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "list : " << *it << std::endl;
		++it;
	}
	std::list<int> l2(l);
	std::list<int> l3(l);
	if (l2 == l3) {
		std::cout << "list 'l2' and list 'l3' are same" << std::endl;
	}
	return 0;
}
