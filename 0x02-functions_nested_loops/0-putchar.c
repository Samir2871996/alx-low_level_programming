#include "main.h"

/**
 * main - ENTRY point
 *
 * Description: A c fundction that prints that prints
 *
 * Return: Always 0 (sucess)
*/


int main(void)
{

	char st[] = "_putchar";
	int i = 0;

	while (i < 8)
	{

		_putchar(st[i]);
		_putchar('\n');
		i++;
	}

	return (0);

}
