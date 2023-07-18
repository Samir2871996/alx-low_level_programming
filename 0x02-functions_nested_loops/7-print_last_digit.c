
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
	char digit;

	if (n < 0)
		digit = -1 * (n % 10);
	else
		digit = n % 10 ;
	_putchar('digit');

	return (digit);
}
