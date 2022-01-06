#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	static int const	mFractionalBits;

	int					mRawBits;

public:
	int		getRawBits(void) const;
	void	setRawBits(int const num);
	int		toInt(void) const;
	float	toFloat(void) const;

	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const & obj);
	Fixed& operator=(Fixed const & obj);

	Fixed(int const num);
	Fixed(float const num);
};

std::ostream& operator<<(std::ostream& out, Fixed const & _fixed);


#endif