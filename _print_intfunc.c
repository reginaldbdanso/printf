#include "main.h"

/**
 * _print_intfunc - prints an integer as a string
 * @newargums: number to be printed
 * Return: number of characters printed
 */

int _print_intfunc(va_list newargums)
{
	int n, counter = 0;

	n = va_arg(newargums, int);
	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n < 0)
		{
			_putchar('-');
			counter++;
			n = -n;
		}
		counter += _print_int(n);
	}
	else
		return (-1);
	return (counter);
}
