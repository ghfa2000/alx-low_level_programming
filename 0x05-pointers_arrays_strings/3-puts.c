#include "main.h"

/**
 * _puts - I do not fear computers. I fear the lack of them
 * @str: string to print
 * Return: ......
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

