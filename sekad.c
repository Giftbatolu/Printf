#include "main.h"

/**
 * print_percent - function that print percent.
 * @args: character argument to print.
 *
 * Return: percent.
 */

int print_percent(va_list args)
{
	(void) args;

	_putchar('%');
	return (1);
}

/**
 * print_string - function that print strings.
 * @args: argument pass to function.
 *
 * Return: the number of strings
 */
int print_string(va_list args)
{
	char *str;
	int count = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str =  "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * print_char - function thst print char.
 * @args: argument pass to the function.
 *
 * Return: The number of char.
 */
int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
