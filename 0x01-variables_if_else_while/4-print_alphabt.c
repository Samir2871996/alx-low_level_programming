#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A c function that prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{

char a = 'a';


while (a <= 'z')
{
if (a == 'q' || a == 'e')
a++;
else
{
putchar(a);
a++;
}
}

putchar('\n');

return (0);
}
