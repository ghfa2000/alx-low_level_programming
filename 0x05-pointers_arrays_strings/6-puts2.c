#include "main.h"

/**
 * puts2 - Half the lies they tell about me aren't true
 * @str: input
 * Return: .....
 */

void puts2(char *str)
{
	int l = 0;
	int t = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		l++;
	}

	t = l - 1;

	for (i= 0; i <= t; i++)
	{
		if (i % 2 ==0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}

