#include "main.h"
/**
 * _printf - function to print to output
 * @format: format specifer holder
 * Return: number of output printed
 */
int _printf(const char *format, ...)
{
	va_list list_print;
	unsigned int loot = 1, move = 0, skd;

	if (format == NULL)
		return (-1); /* since it null, it return error */

	va_start(list_print, format);
	for (; format[move] != '\0'; move++)
	{
		if (format[move] != '%')
		{
			sekad(format[move]);
		}
		if (format[move] == '%' && format[move + 1] == '%')
		{
			sekad('%');
		}
		if (format[move] == '%' && format[move + 1] == 'c')
		{
			sekad(va_arg(list_print, int));
			move++;
		}
		if (format[move] == '%' && format[move + 1] == 's')
		{
			skd = sekdam(va_arg(list_print, char *));
			move++;
			loot += (skd - 1);
		}
	}
		va_end(list_print);
		return (loot);
}
