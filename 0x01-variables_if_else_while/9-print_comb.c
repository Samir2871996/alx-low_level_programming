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


while (a <= '8')
{
putchar(a);
putchar(',');
putchar(' ');
a++;
}
while (a == '9')
{
putchar(a);
}
return (0);
}
