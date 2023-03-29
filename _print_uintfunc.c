#include "main.h"

/**
 * _print_uintfunc - prints an integer as a string
 * @newargums: number to be printed
 * Return: number of characters printed
 */

int _print_uintfunc(va_list newargums)
{
	unsigned int tmp, n = 0;
	int i = 0, x = 0, count = 0;

	n = va_arg(newargums, int);
	if (n <= UINT_MAX)
	{
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
			count++;
			i--;
			tmp = n;
		}
	}
	else
		return (-1);
	return (count);
}
