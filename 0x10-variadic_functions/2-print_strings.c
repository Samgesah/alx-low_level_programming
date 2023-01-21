#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  *print_strings - variadic function
  *@separator: pointer
  *@n: unsigned int
  *Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *test;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		test = va_arg(list, char*);
		if (test)
		{
			printf("%s", test);
		}
		else
			printf("(nil)");
		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
