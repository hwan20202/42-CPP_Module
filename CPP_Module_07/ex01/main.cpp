#include "iter.hpp"

int	main(void) {
	double arr[5] = {1, 2, 3, 4, 5};

	iter(arr, sizeof(arr) / sizeof(*arr), func);

	return 0;
}