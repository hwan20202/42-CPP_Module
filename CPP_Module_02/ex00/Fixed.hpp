#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	static int const	mFractionalBits = 8;
	
	int					mRawBits;

public:
	int		getRawBits(void) const;
	void	setRawBits(int const num);

	Fixed(void);
	Fixed(Fixed const & obj);
	Fixed	&operator=(Fixed const & obj);
	~Fixed(void);
};

#endif