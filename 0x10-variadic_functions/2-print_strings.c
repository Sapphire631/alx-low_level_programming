#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings: prints string
 * @n- the number of strings passed to the function
 * @separator:seperates the strings to be printed between strings
 * @...: A variable number of strings to be printed
 * Description: if separator is NULL,it is not printed.
 * If one of the strings is NULL,Nil is printed instead
 */

void print_all(const char * const format, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
