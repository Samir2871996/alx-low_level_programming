#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A c function that prints all possible
 * combination of two two digit numbers
 *
 * Return: Always 0 (success)
*/


int main(void)
{

	int a = '0';
	int b = '0';
	int c = '0';
	int d = '0';



	while (a <= 57)
	{

		while (b <= 57)
		{

			c = a;
			d = b + 1;

			while (c <= 57)
			{
				while (d <= 57)
				{

					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if ((a != 57) | (b != 56) | (c != 57) | (d != 57))
					{

						putchar(',');
						putchar(' ');
					}

					d++;
				}

				d = '0';
				c++;
			}

			b++;
		}

		b = '0';
		a++;
	}

	putchar('\n');

	return (0);
}



