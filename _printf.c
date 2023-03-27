#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: format string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list argums;
	int index = 0, counter = 0;

	va_start(argums, format);

	if (format == NULL)
		return (-1);

	for (; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			/*counter += _switch_case_function(format[index + 1], argums);*/
			index++;
			continue;
		}
		counter += _putchar(format[index]);
	}
	va_end(argums);
	return (counter);
}

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: pointer
 * Return: number of characters printed
 */

int _puts(char *s)
{
	int index = 0;

	while (s[index] != 0)
	{
		_putchar(s[index]);
		index++;
	}
	return (index);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _switch_case_function(char c, ...)
{
	va_list newargums;
	int counter = 0;

	va_start(newargums, c);

	switch (c)
	{
		case 'c':
			counter += _putchar(va_arg(newargums, int));
			break;

		case 's':
			counter += _puts(va_arg(newargums, char *));
			break;

		case '%':
			counter += _putchar('%');
			break;

		case 'd':
			counter  += _putchar(va_arg(newargums, int));
			break;

		case 'i':
			counter += _putchar(va_arg(newargums, int));
			break;

		default:
			counter += _putchar(c);
	}

	va_end(newargums);
	return (counter);
}
