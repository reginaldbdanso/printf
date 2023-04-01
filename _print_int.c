#include "main.h"

/**
 * _print_int - prints an integer as a string
 * @num: number to be printed
 * Return: number of characters printed
 */

int _print_int(int num)
{
	int counter = 0;

	if (num < 0)
	{
		_putchar('-');  /*print a negative sign*/
		num = -num;  /*make the integer positive*/
		counter++;
	}

	if (num > 9)
	{
		/*recursively print the integer digits*/
		_print_int(num / 10);
	}
	/*print the last digit of the integer*/
	counter += _putchar(num % 10 + '0');
	return (counter);
}
