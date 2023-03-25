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
	for (; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			switch (format[index + 1])
			{
				case 'c':
					counter += _putchar(va_arg(argums, int));
					index++;
					break;

				case 's':
					counter += _puts(va_arg(argums, char *));
					index++;
					break;

				case '%':
					counter += _putchar('%');
					index++;
					break;
			}
			continue;
		}
		counter += _putchar(format[index]);
	}
	va_end(argums);
	return (counter);
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
