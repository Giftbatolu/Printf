#include "main.h"
/**
 * _printf - tp prnt output
 * @format: format spec
 * Return: number of output
 */
int _printf(const char *format, ...)
{
	va_list list_print;
	int move = 1, loot;

	if (format == NULL)
		return (-1);

	va_start(list_print, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			sekad(*format);
			format++;
			continue;
		}
		else if (*format == '%')
			format++;

		switch (*format)
		{
			case '%':
				sekad('%');
				format++;
				break;
			case 'c':
				sekad(va_arg(list_print, int));
				format++;
				break;
			case 'r':
				sekdam("%r");
				format++;
				break;
			case 's':
				loot = sekdam(va_arg(list_print, char *));
				format++;
				move += (loot - 1);
				break;
		}
	}
	va_end(list_print);
	return (move);
}
