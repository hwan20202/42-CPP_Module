#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					mRawBits;
	static int const	mFractionalBits;

public:
	int		getRawBits(void) const;
	void	setRawBits(int const num);

	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const & obj);
	Fixed& operator=(Fixed const & obj);
};

#endif