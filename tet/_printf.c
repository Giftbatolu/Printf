#include "main.h"
/**
 * _printf - function to print to output
 * @format: format specifer holder
 * Return: number of output printed
 */
int _printf(const char *format, ...)
{
	va_list list_print;
	int loot = 0, move = 0;

	if (format == NULL)
		return (-1); /* since it null, it return error */

	va_start(list_print, format);
	for (; format[move] != '\0'; move++)
	{
		if (format[move] != '%')
		{
			sekad(format[move]);
			loot++;
		}
		if (format[move] == '%' && format[move + 1] == '%')
		{
			sekad('%');
			loot++;
		}
		if (format[move] == '%' && format[move + 1] == 'c')
		{
			sekad(va_arg(list_print, int));
			loot++;
			move++;
		}
		if (format[move] == '%' && format[move + 1] == 's')
		{
			sekdam(va_arg(list_print, char *));
			loot++;
			move++;
		}
	}
		return (loot);
		va_end(list_print);
}
