#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A c function that prints the int N.O less than 10
 *
 * Return: Always 0 (success)
*/

int main(void)
{

int a = '0';
int b = '0';


while (a <= '9')
{
do {
b++;
} while (a >= b);
while (b <= '9')
{
putchar(a);
putchar(b);
if (a != '8' || b != '9')
{
putchar(',');
putchar(' ');
}
b++;
}
b = 0;
a++;
}
putchar('\n');
return (0);
}
