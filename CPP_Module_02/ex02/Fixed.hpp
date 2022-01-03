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

	static Fixed& min(Fixed &obj1, Fixed &obj2);
	static Fixed& max(Fixed &obj1, Fixed &obj2);
	static Fixed const & min(const Fixed &obj1, const Fixed &obj2);
	static Fixed const & max(const Fixed &obj1, const Fixed &obj2);

	bool	operator>(Fixed const & obj) const;
	bool	operator<(Fixed const & obj) const;
	bool	operator<=(Fixed const & obj) const;
	bool	operator>=(Fixed const & obj) const;
	bool	operator==(Fixed const & obj) const;
	bool	operator!=(Fixed const & obj) const;
	Fixed	operator+(Fixed const & obj) const;
	Fixed	operator-(Fixed const & obj) const;
	Fixed	operator*(Fixed const & obj) const;
	Fixed	operator/(Fixed const & obj) const;
	Fixed&	operator++(void);
	Fixed	operator++(int notused);
	Fixed&	operator--(void);
	Fixed	operator--(int notused);
	Fixed&	operator=(Fixed const & obj);

	Fixed(void);
	Fixed(int const num);
	Fixed(float const num);
	~Fixed(void);
	Fixed(Fixed const & obj);
};

std::ostream& operator<<(std::ostream& out, Fixed const & _fixed);


#endif