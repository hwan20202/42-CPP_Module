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
	int		toInt(void) const;
	float	toFloat(void) const;

	Fixed(void);
	Fixed(int const num);
	Fixed(float const num);
	~Fixed(void);
	Fixed(Fixed const & obj);
	Fixed& operator=(Fixed const & obj);
};

std::ostream& operator<<(std::ostream& out, Fixed const & _fixed);


#endif