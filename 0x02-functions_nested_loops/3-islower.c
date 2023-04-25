#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * Return: 1 if char c is lowercase.
 * Return: 0 else.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

