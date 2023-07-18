#include "main.h"

/**
 * _abs - function that prints the abs value
 *
 * @n: integer parmater to get its abs
 *
 * Return: Always 0 (sucsess)
*/


int _abs(int n)
{
	if (n < 0)
	{
		n = n + (-2 * n);
		_putchar(n);
	}
	else
		_putchar(n);
	_putchar('\n');
	return (0);
}
