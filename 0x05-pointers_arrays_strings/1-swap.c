#include "main.h"

/**
 * swap-int - swaps the value of two integers.
 * @a: first integer.
 * @b: second integer.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
*a = *b;
*b = tmp;
}
