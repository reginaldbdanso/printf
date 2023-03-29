#include "main.h"

/**
 * _switch_case_function1 - switched between different format specifiers.
 * @c: format character
 * @newargums: variable of type va_list
 * Return: number of characters printed
 */

int _switch_case_function1(const char *c, va_list newargums)
{
	int counter = 0;

	switch (*c)
	{
		case 'u':
			counter += _print_uintfunc(newargums);
			break;
		case 'o':
			counter += _print_octfunc(newargums);
			break;
		case 'x':
			counter += _print_hexlfunc(newargums);
			break;
		case 'X':
			counter += _print_hexufunc(newargums);
			break;
	}
	return (counter);
}
