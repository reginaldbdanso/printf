#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _puts(char *s);
int _switch_case_function(char c, va_list newargums);

int _printf(const char *format, ...);

#endif
