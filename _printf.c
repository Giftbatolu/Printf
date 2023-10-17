#include "main.h"
/**
 * _printf - function to print to output
 * @format: format specifer holder
 * Return: number of output printed
 */
int _printf(const char *format, ...)
{
	type type_t[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_list args;
	int i, j;
	int count = 0;

	if (format == NULL)
		return (-1); /* since it null, it return error */

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; type_t[j].specifier != NULL; j++)
			{
				if (format[i + 1] == type_t[j].specifier[0])
				{
					count += type_t[j].f(args);
					break;
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
