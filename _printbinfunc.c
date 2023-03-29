#include "main.h"

/**
 * _print_binfunc - calls print_binary function
 * @newargums: number to be printed
 * Return: number of characters printed
 */
int _print_binfunc(va_list newargums)
{
	unsigned int num = va_arg(newargums, int);
	int counter = 0;

	counter = print_binary(num);
	return (counter);

}

/**
 * print_binary - prints a number in binary
 * @num: number to be printed
 * Return: count of digits
 *
 */

int print_binary(unsigned int num)
{
	int count;

	count = 0;
	if (num / 2 != 0)
		count += print_binary(num / 2);

	_putchar (num % 2 == 0 ? '0' : '1');
	count++;
	return (count);
}