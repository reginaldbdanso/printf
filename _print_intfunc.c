#include "main.h"

/**
 * _print_int - prints an integer as a string.
 * @num: number to be printed
 * Return: number of characters printed
 */

int _print_intfunc(va_list newargums)
{
	int num = va_arg(newargums, int);
	int i, counter = 0, index = 0, temp_num = num, num_digits = 0;
	char *str;

	if (num >= INT_MIN && num <= INT_MAX)
	{
	/* count the number of digits in the number*/
	do {
	num_digits++;
	temp_num /= 10;
	} while (temp_num > 0);

	/* allocate a buffer to hold the string representation of the number*/
	str = malloc(sizeof(char) * num_digits + 1);
	if (str == NULL)
		return (-1);

	/* handle negative numbers*/
	if (num < 0)
	{
		counter += _putchar('-');
		num = -num;
	}

	/* convert the number to a string*/
	do {
	str[index++] = num % 10 + '0';
	num /= 10;
	} while (num > 0);

	/* write the string to stdout in reverse order*/
	for (i = index - 1; i >= 0; i--)
	{
		counter += write(1, &str[i], 1);
	}
	}
	else
	{
		return (-1);
	}
	return (counter);
}
