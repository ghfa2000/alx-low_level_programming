#include "main.h"

/**
 * _strlen - This report, by its very length, defends itself agains
 *  the risk of being read
 *  @s: string
 *  Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}

