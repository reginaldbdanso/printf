#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately.
 */

int _putchar(char c)
{
	int counter;

	counter = write(1, &c, 1);
	if (counter == 1)
		return (counter);
	else
		return (-1);
}
