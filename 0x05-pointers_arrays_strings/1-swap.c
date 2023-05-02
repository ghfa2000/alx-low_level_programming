#include "main.h"

/**
 * swap_int - Don't swap horses in crossing a stream
 * @a: integer to swap
 * @b: integer to swap
 * Return: .........
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

