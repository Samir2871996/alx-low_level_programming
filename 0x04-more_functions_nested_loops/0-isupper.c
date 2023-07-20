#include "main.h"

/**
 * isupper - a function that checks for upper cases
 * @c: an integer
 *Return: always 0 (sucsess)
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
