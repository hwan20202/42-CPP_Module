#ifndef	WHATEVER_HPP
#define WHATEVER_HPP

//check swap function original prototype
template <typename T>
void	swap(T& t1, T& t2) {
	T	tmp;

	tmp = t1;
	t1 = t2;
	t2 = tmp;
}

//check min,max funciton original prototype
template <typename T>
T	min(T const & t1, T const & t2) {
	if (t1 < t2)
		return t1;
	return t2;
}

template <typename T>
T	max(T const & t1, T const & t2) {
	if (t1 > t2)
		return t1;
	return t2;
}

#endif