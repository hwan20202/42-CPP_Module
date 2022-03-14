#ifndef	WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T& t1, T& t2) {
	T	tmp;

	tmp = t1;
	t1 = t2;
	t2 = tmp;
}

template <typename T>
const T&	min(const T& t1, const T& t2) {
	if (t1 < t2)
		return t1;
	return t2;
}

template <typename T>
const T&	max(const T& t1, const T& t2) {
	if (t1 > t2)
		return t1;
	return t2;
}

#endif