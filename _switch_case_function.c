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
	char *s;

	switch (*c)
	{
		case 'c':
			counter += _putchar(va_arg(newargums, int));
			break;

		case 's':
			s = va_arg(newargums, char *);
			if (s == NULL)
				s = "(null)";
			counter += _puts(s);
			break;

		case '%':
			counter += _putchar('%');
			break;

		case 'd':
		case 'i':
			counter += _print_int(va_arg(newargums, int));
			break;

		case 'b':
			counter += _print_bin(va_arg(newargums, int));
			break;

		default:
			counter += _putchar(*(c - 1));
			counter += _putchar(*(c));
	}
	return (counter);
}
