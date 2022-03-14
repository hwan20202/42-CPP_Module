#include "iter.hpp"

int	main(void) {
	double	arr[5] = {10, 21, 37, 77, 0};
	int const		arr2[3] = {43, 2, 56};

	iter(arr, sizeof(arr) / sizeof(*arr), func);
	iter(arr2, sizeof(arr2) / sizeof(*arr2), func);

	return 0;
}