#include "main.h"
#include <unistd.h>
/**
 * _putchar - some text to be here !!
 *
 * Return: 1 on success.
 * on error: return -1 .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

