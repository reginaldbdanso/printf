#include "main.h"

/**
 * _print_hexlfunc - prints an integer as a string
 * @newargums: number to be printed
 * Return: number of characters printed
 */

int _print_hexlfunc(va_list newargums)
{
	int counter = 0, decimalnum, i = 0, temp;
	char hexadecimalnum[100]; 

	decimalnum = va_arg(newargums, int);
	if (decimalnum == 0)
	{
		counter += _putchar('0');
		return(counter);
	}

	while (decimalnum != 0)
	{
		temp = decimalnum % 16;
		if (temp < 10)
			hexadecimalnum[i] = temp + 48;
		else
			hexadecimalnum[i] = temp + 87;
		i++;
		decimalnum /= 16;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		counter += _putchar(hexadecimalnum[j]);
	}
	return (counter);
}
