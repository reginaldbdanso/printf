#include "main.h"

/**
 * _print_binfunc - prints a number in binary
 * @newargums: number to be printed
 * Return: count of digits
 */

int _print_binfunc(va_list newargums)
{
	unsigned int num = va_arg(newargums, int);
	int count;

	count = 0;
	if (num / 2 != 0)
		count += print_binary(num / 2);

	_putchar (num % 2 == 0 ? '0' : '1');
	count++;
	return (count);
}
