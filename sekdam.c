#include "main.h"
/**
 * sekdam - function to print string
 * @look_string: counts thr strings
 * Return: number of strings length
 */

int sekdam(char *look_string)
{
	int length = 0;

	if (*look_string)
	{
		while (look_string[length] != '\0')
		{
			sekad(look_string[length]);
				length++;
		}
	}
	return (length);
}
