#include "main.h"
/**
 * print_bin - prints an integer as a string.
 * @num: positive number to be printed
 * Return: number of characters printed
 */

int print_bin(unsigned int num)
{
	int i, rder, counter = 0, index = 0, temp_num = num, num_digits = 0;
	char *str;

	/* count the number of digits in the number*/
	do {
	num_digits++;
	temp_num /= 10;
	} while (temp_num > 0);

	/* handle negative numbers */
	if (num < 0)
	{
	_putchar('-');
	temp_num = -num;
	}

	/* allocate a buffer to hold the string representation of the number*/
	str = malloc(sizeof(char) * num_digits + 1);
	if (str == NULL)
		return (1);

	/* convert the number to binary*/
	do {
	rder = num % 2;
	num = num / 2;
	str[index++] = rder + '0';
	} while (num > 0);

	/* write the string to stdout in reverse order*/
	for (i = index - 1; i >= 0; i--)
	{
		counter += write(1, &str[i], 1);
	}
	return (counter);
}
