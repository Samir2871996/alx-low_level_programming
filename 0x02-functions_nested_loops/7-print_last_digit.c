
#include "main.h"

/**
 * print_last_digit - A c function that print
 * the last digit
 *
 * @n: int parameter
 *
 * Return: the last digit
*/


int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		digit = -1 * (n % 10);
	else
		digit = n % 10 ;

	return ('digit');
}
