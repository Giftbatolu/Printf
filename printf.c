#include "main.h"
/**
 * _printf - function to print to output
 * @format: format specifer holder
 * Return: number of output printed
 */
int _printf(const char *format, ...)
{
	va_list list_print;
	int loot = 0;

	va_start(list_print, format);
		while (*format != '\0')
		{
			if (*format != '%')
			{
				sekad(*format);
				format++;
				continue;
			}
		else
			format++;

		switch (*format)
		{
			case '%':
				sekad('%');
				loot++;
				break;
			case 'c':
				sekad(va_arg(list_print, int));
				loot++;
				break;
			case 's':
				sekdam(va_arg(list_print, char*));
				loot++;
				break;
			case 'r':
				sekdam("%r");
				break;

		}
		format++;
		}
		va_end(list_print);
		return (loot);
}
