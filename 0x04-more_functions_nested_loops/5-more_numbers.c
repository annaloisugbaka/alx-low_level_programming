#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 */
void more_numbers(void)
{
	int i = 0, n;

	while (i < 10)
	{
		n = 0;
		while (n < 15)
		{
			if (n >= 10)
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
