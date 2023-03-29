#include "main.h"

/**
 * _putcharfunc - writes the character c to stdout
 * @newargums: va_list variable (character)
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putcharfunc(va_list newargums)
{
	int counter;
	char car = (va_arg(newargums, int));
	counter = write(1, &car, 1);
	if (counter == 1)
		return (counter);
	else
		return (-1);
}
