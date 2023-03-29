#include "main.h"

/**
 * print_binary - prints a number in binary
 * @num: number to be printed
 * Return: count of digits
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
