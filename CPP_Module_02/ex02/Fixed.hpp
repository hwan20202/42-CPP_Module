#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	static int const	mFractionalBits = 8;

	int					mRawBits;

public:
	int		getRawBits(void) const;
	void	setRawBits(int const num);
	int		toInt(void) const;
	float	toFloat(void) const;

	static Fixed& min(Fixed &obj1, Fixed &obj2);
	static Fixed& max(Fixed &obj1, Fixed &obj2);
	static Fixed const & min(Fixed const & obj1, Fixed const & obj2);
	static Fixed const & max(Fixed const & obj1, Fixed const & obj2);

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
	Fixed	&operator++(void);
	Fixed	operator++(int notused);
	Fixed	&operator--(void);
	Fixed	operator--(int notused);

	Fixed(void);
	Fixed(Fixed const & obj);
	Fixed&	operator=(Fixed const & obj);
	~Fixed(void);

	Fixed(int const num);
	Fixed(float const num);
};

std::ostream& operator<<(std::ostream& out, Fixed const & _fixed);

#endif