#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct convert_type - function that match format specifier
 * @specifier: pointer to specifier.
 * @f: function pointer to the functions.
 *
 * Description: longer description.
 */

typedef struct convert_type
{
	char *specifier;
	int (*f)(va_list args);
} type;

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
