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
	int counter = 0;

	/*If num is greater than 1, continue the recursion*/
	if (num > 1)
		counter += print_binary(num / 2);
	/*Print the least significant bit of num in binary form */
	_putchar(num % 2 + '0');
	counter++;
	return (counter);
}
