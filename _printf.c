#include "main.h"

/**
 * _printf - generate output according to a format
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
			if (*(format + index + 1) == '\0')
			{
				counter += _putchar(format[index]);
				return (-1);
			}
			else
			{
			counter += _switch_case_function((format + index + 1), argums);
			index++;
			continue;
			}

		}
		counter += _putchar(format[index]);
	}
	va_end(argums);
	return (counter);
}
