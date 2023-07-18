#include "main.h"

/**
 *_islower -  A c fundtion that
 * checks for lower cases
 *
 *@c: A c fundtion that checks for lower cases
 *
 * Return: 1 in case of lower 0 any thing else
*/


int _islower(int c)
{

	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);

}
