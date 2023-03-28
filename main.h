#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _puts(char *s);
int _switch_case_function(const char *c, va_list newargums);
int _print_int(int num);
int _print_bin(unsigned int num);


int _printf(const char *format, ...);

#endif
