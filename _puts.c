#include "main.h"
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
