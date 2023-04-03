#include "main.h"

/**
 * _print_intfunc - prints an integer as a string
 * @n: number to be printed
 * Return: number of characters printed
 */

int _print_int(int n)
{
	unsigned int tmp;
	int i = 0, x = 0, counter = 0;

	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n < 0)
		{
			_putchar('-');
			counter++;
			n = -n;
		}
		
		tmp = n;
		while (tmp / 10 > 0)
		{
			tmp /= 10;
		i++;
		}
		
		tmp = n;
		while (i >= 0)
		{
			for (x = 0; x < i; x++)
			tmp /= 10;
			tmp %= 10;
			_putchar(tmp + '0');
			counter++;
			i--;
			tmp = n;
		}
	}
	else
		return (-1);
	return (counter);
}
