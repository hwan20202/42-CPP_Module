#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
private:
	T* mData;
	unsigned int const	mSize;
public:
	Array()
		:	mSize(0), mData(new T[0]) {
		std::cout << "Empty array created" << std::endl;
	}

	Array(unsigned int n)
		:	mSize(n), mData(new T[n]) {
		std::cout << mSize << " size array created" << std::endl;
	}

	Array(Array const & rhs): mSize(rhs.mSize), mData(new T[rhs.mSize]) {
		std::cout << "Array copy constructor called" << std::endl;
		*this = rhs;
	}

	Array& operator=(Array const & rhs) {
		std::cout << "Array assignation operator called" << std::endl;
		delete[] mData;
		*const_cast<unsigned int*>(&mSize) = rhs.mSize;
		mData = new T[mSize];
		for (int idx = 0; idx < mSize; idx++) {
			mData[idx] = rhs.mData[idx];
		}
		return *this;
	}

	~Array() {
		std::cout << "Array<" << typeid(T).name() << "> destructor called" << std::endl;
		delete[] mData;
	}

	unsigned int	size(void) const {
		return mSize;
	}

	T&	operator[](unsigned int u) const {
		if (mSize <= u)
			throw std::out_of_range("Out of Range");
		return mData[u];
	}
};

#endif
