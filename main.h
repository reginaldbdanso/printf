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
int _putcharfunc(va_list newargums);
int _putsfunc(va_list newargums);
int _print_intfunc(va_list newargums);
int _print_binfunc(va_list newargums);


int _printf(const char *format, ...);

#endif
