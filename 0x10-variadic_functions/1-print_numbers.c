#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @seperator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	unsigned int num;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		printf("%d", num);

		if (seperator && i < n - 1)
			printf("%s", seperator);
	}

	va_end(list);
	printf("\n");
}
