#include "main.h"

/**
 *_isalpha -  A c fundtion that
 * checks for lower cases
 *
 *@c: A c fundtion that checks for lower cases
 *
 * Return: 1 in case of lower 0 any thing else
*/


int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);

}
