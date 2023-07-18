#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Descreption: A c function that prints thelower
 *
 * Return Always void
*/

void print_alphabet_x10(void)
{
char i = 'a';
char j = 0;

while (j < 10)
{
while (i <= 'z')
{
_putchar (i);
i++;
}
i = 'a';
j++;
_putchar('\n');
}

}
