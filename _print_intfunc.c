#include "main.h"

/**
 * _print_intfunc - prints an integer as a string.
 * @newargums: number to be printed
 * Return: number of characters printed
 */

int _print_intfunc(va_list num)
{
    unsigned int tmp;
    int n = 0, i = 0, x = 0, count = 0;
    n = va_arg(num, int);
    if (n <= INT_MAX && n >= INT_MIN)
    {
        if (n < 0)
        {
            _putchar('-');
            count++;
            n = -n;
        }
        tmp = n;
        while (tmp / 10 > 0)
        {
            tmp /= 10;
            i++;
        }
        tmp = n;
        while (i >= 0)
        {
            for (x = 0; x < i; x++)
                tmp /= 10;
            tmp %= 10;
            _putchar(tmp + '0');
            count++;
            i--;
            tmp = n;
        }
    }
    else
        return (-1);
    return (count);
}