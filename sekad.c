#include "main.h"

/**
 * sekad - print to standard_output
 * @sa: parameter
 * Return: number of output
 */
int sekad(char sa)
{
	return (write(1, &sa, 1));
}
