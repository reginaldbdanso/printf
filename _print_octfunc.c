#include "main.h"

/**
 * _print_octfunc - prints an integer as a string
 * @newargums: number to be printed
 * Return: number of characters printed
 */

int _print_octfunc(va_list newargums)
{
	int decimalnum, i = 1, octalnum = 0, counter = 0;

	decimalnum = va_arg(newargums, int);
	if (decimalnum == 0)
	{
		counter += _putchar('0');
		return (counter);
	}

	while (decimalnum != 0)
	{
		octalnum += (decimalnum % 8) * i;
		decimalnum /= 8;
		i *= 10;
	}
	if (octalnum < 100)
		_print_int(0);
	_print_int(octalnum);
	return (counter);
}
