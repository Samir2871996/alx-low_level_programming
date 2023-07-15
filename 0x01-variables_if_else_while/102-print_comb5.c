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

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;



	while (a <= '9')
	{

		while (b <= '9')
		{

			c = a;
			d = b + 1;

			while (c <= '9')
			{
				while (d <= '9')
				{

					putchar(a);
					putchar(b);
					putchar(c);
					putchar(d);

					if ((a != '9') | (b != '8') | (c != '9') | (d != '9'))
					{

						putchar(',');
						putchar(' ');
					}

					d++;
				}

				d = 0;
				c++;
			}

			b++;
		}

		b = 0;
		a++;
	}

	putchar('\n');

	return (0);
}



