#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates arguments on CL
  *@ac: integer
  *@av: pointer to array
  *Return: a pointer
  */

char *argstostr(int ac, char **av)
{
	char *s;
	int size = 0, i = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size += 1;
		}
		size += 1;
	}
	size += 1;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}



