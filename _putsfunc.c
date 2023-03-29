#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: pointer
 * Return: number of characters printed
 */

int _putsfunc(va_list newargums)
{
	int index = 0;
	char *s;

	s = va_arg(newargums, char *);
	if (s == NULL)
		s = "(null)";

	while (s[index] != 0)
	{
		_putchar(s[index]);
		index++;
	}
	return (index);
}
