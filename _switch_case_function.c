#include "main.h"

/**
 * _switch_case_function - switched between different format specifiers.
 * @c: format character
 * @newargums: variable of type va_list
 * Return: number of characters printed
 */

int _switch_case_function(const char *c, va_list newargums)
{
	int counter = 0;

	switch (*c)
	{
		case 'c':
			counter += _putcharfunc(newargums);
			break;
		case 's':
			counter += _putsfunc(newargums);
			break;
		case '%':
			counter += _putchar('%');
			break;
		case 'd':
		case 'i':
			counter += _print_int(newargums);
			break;
		case 'b':
			counter += _print_binfunc(newargums);
			break;
		default:
			counter += _putchar(*(c - 1));
			counter += _putchar(*c);
			break;
	}
	return (counter);
}
