#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  *str_concat - string concatenate function
  *@s1: first string
  *@s2: second string
  *Return: a pointer
  *null on failure
  */
char *str_concat(char *s1, char *s2)
{
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;
	int i = 0;

	char *s = malloc(size * sizeof(char));

	for (i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}

	for (i = 0; i < s2_length; i++)
	{
		s[s1_length + i] = s2[i];
	}
	s[size - 1] = '\0';
	return (s);
}

