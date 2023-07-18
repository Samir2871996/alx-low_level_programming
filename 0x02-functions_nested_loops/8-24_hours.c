#include "main.h"

/**
 * jack_bauer - function that prints the time
 *
*/


void jack_bauer(void)
{
	int i = '0';
	int j = '0';
	int k = '0';
	int l = '0';


	while (i <= '2')
	{
		while (j <= '9')
		{
			while (k <= '5')
			{
				while (l <= '9')
				{
					if ((i == '2') && (j == '3') && (k == '5') && (l == '9'))
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
						l++;
						j = '9';

					}
					else
					{
						_putchar(i);
                                                _putchar(j);
                                                _putchar(':');
                                                _putchar(k);
                                                _putchar(l);
                                                _putchar('\n');
                                                l++;
					}
				}

				l = '0';
				k++;
			}

			k = '0';
			j++;
		}

		j = '0';
		i++;
	}
}
