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
			counter += _switch_case_function((format + index + 1), argums);
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
			counter += _putchar(va_arg(newargums, int));
			break;

		case 's':
			counter += _puts(va_arg(newargums, char *));
			break;

		case '%':
			counter += _putchar('%');
			break;

		case 'd':
			counter += print_int(va_arg(newargums, int));
			break;

		case 'i':
			counter += print_int(va_arg(newargums, int));
			break;

		default:
			counter += _putchar(*c);
	}
	return (counter);
}

/**
 * print_int - prints an integer as a string.
 * @num: number to be printed
 * Return: number of characters printed
 */

int print_int(int num)
{
	int i, counter = 0, index = 0, temp_num = num, num_digits = 0;
	char *str;

	/* count the number of digits in the number*/
	do {
	num_digits++;
	temp_num /= 10;
	} while (temp_num > 0);

	/* allocate a buffer to hold the string representation of the number*/
	str = malloc(sizeof(char) * num_digits + 1);
	if (str == NULL)
		return (1);

	/* handle negative numbers*/
	if (num < 0)
	{
		counter += _putchar('-');
		num = -num;
	}

	/* convert the number to a string*/
	do {
	str[index++] = num % 10 + '0';
	num /= 10;
	} while (num > 0);

	/* write the string to stdout in reverse order*/
	for (i = index - 1; i >= 0; i--)
	{
		counter += write(1, &str[i], 1);
	}
	return (counter);
}
