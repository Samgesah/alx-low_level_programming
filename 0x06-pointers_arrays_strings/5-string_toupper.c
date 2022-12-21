#include "main.h"

/**
  *string_toupper - lowercase to upper
  *@p: string to modify
  *Return: string.
  */

char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
