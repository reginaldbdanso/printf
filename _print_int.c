#include "main.h"

/**
 * _print_int - prints an integer as a string
 * @num: number to be printed
 * Return: number of characters printed
 */

int _print_int(int num)
{
	unsigned int tmp;
	int i = 0, x = 0, count = 0;

	if (num <= INT_MAX && num >= INT_MIN)
	{
		if (num < 0)
		{
			_putchar('-');
			count++;
			num = -num;
		}

		tmp = num;
		while (tmp / 10 > 0)
		{
			tmp /= 10;
		i++;
		}

		tmp = num;
		while (i >= 0)
		{
			for (x = 0; x < i; x++)
			tmp /= 10;
			tmp %= 10;
			_putchar(tmp + '0');
			count++;
			i--;
			tmp = num;
		}
	}
	else
		return (-1);
	return (count);
}
