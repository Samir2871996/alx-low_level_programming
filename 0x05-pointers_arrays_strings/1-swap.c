#include "main.h"

/**
 * swap_int - a fucntion that swap two integars
 *
 * @a: input
 * @b: input
*/

void swap_int(int *a, int *b)
{
	int swap = *b;

	*b = *a;
	*a = swap;
}
