#include "main.h"

/**
 *print_sign -  a c fcuntion that checks for the sign
 *
 * @n: represent the number that will be checked
 *
 * Return: 0 ,1 , -1
*/


int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
_putchar('1');
_putchar('\n');
}
else if (n == 0)
{
_putchar('0');
_putchar(',');
_putchar(' ');
_putchar('0');
_putchar('\n');
}
else  if (n < 0)
{
_putchar('-');
_putchar(',');
_putchar(' ');
_putchar('-');
_putchar('1');
_putchar('\n');
}
return (0);
}
