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
		n = -1 * n;
	return (n);
}
