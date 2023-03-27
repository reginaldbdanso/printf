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

				case 'd':
					counter  += _putchar(va_arg(argums, int));
					index++;
					break;

				case 'i':
					counter += _putchar(va_arg(argums, int));
					index++;
					break;
				default:
					counter += _putchar(format[index]);
			}
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

#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
//     unsigned int ui;
//     void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
//     ui = (unsigned int)INT_MAX + 1024;
//     addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
//     _printf("Unsigned:[%u]\n", ui);
//     printf("Unsigned:[%u]\n", ui);
//     _printf("Unsigned octal:[%o]\n", ui);
//     printf("Unsigned octal:[%o]\n", ui);
//     _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
//     printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
//     _printf("Address:[%p]\n", addr);
//     printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}