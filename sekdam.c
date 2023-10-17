#include "main.h"
/**
 * sekdam - function to print string
 * @look_string: counts thr strings
 * Return: number of strings length
 */

int sekdam(char *look_string)
{
	return (write(1, look_string, strlen(look_string)));
}
