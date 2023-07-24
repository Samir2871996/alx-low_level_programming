#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int len_of_arr = 0;
	char *p = str;

	while (*p != '\0')
	{
		len_of_arr++;
		p++;
	}
	if (len_of_arr % 2 != 0)
	{
		str = str + ((len_of_arr - 1) / 2);
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	else
	{
		str = str + (len_of_arr / 2);
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');

}

