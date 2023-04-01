#include "main.h"

/**
 * _print_int - prints an integer as a string
 * @num: number to be printed
 * Return: number of characters printed
 */

int _print_int(int num)
{
	int temp, counter = 0;

	if (num == INT_MIN)
	{
		temp = num;
		num = num + 1;
	}

	if (num < 0)
	{
		_putchar('-');  /*print a negative sign*/
		num = num * -1;  /*make the integer positive*/
		counter++;
	}

	if (num > 9)
	{
		/*recursively print the integer digits*/
		counter += _print_int(num / 10);
	}
	/*print the last digit of the integer*/
	if(num == INT_MAX && temp == INT_MIN)
	{
		putchar(num % 10 + '1');
	}
	else
	{
		putchar(num % 10 + '0');
	}
	counter++;

	return (counter);
}
