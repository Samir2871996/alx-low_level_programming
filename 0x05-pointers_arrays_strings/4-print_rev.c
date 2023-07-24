#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;
	while (length > 0)
	{
		_putchar(*s);
		length--;
		s--;
	}
}

