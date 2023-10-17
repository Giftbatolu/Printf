#include "main.h"
/**
 * sekad - print character only
 * @s: character argument to print
 * Return: number of character print
 */

int sekad(char s)
{
	return (write(1, &s, 1));
}
