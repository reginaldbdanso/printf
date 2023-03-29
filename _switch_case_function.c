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

	if (*c == 'u' || *c == 'o' || *c == 'x' || *c == 'X')
	{
		/* handle u, o, x and X format specifiers */
		counter += _switch_case_function1(c, newargums);
	}
	else
	{
		/* handle c, s, d, i, b, and unknown format specifiers */
		counter += _switch_case_function2(c, newargums);

	}
	return (counter);
}
