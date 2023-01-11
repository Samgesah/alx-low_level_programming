#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *_strdup -returns a pointer to a new string which is a duplicate of str
  *@str: string
  *Return: pointer
  *Null if str is null
  */
char *_strdup(char *str)
{
	char *s;
	int size, i;

	if (str == NULL)
		return (NULL);
	size = strlen(str) + 1;

	s = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		if (s == NULL)
			return (NULL);
		s[i] = str[i];
	}
	return (s);

}
