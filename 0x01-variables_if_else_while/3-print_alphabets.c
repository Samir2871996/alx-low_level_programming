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
char b = 'A';


while (a <= 'z')
{
putchar(a);
a++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');

return (0);
}
