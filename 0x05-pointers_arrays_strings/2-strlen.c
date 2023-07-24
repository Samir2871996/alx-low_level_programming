#include "main.h"

/**
 * _strlen - a function that get string leng
 *
 * @s: string
 *
 * Return: the legnth of a string
*/


int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}
