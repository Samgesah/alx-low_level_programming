#include "main.h"
#include <string.h>

/**
  *_strncat - concatenate 2 strings
  *@dest: first string
  *@src: second string
  *@n: number of bytes for src
  *Return: string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n > j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (n > 0)
		dest[i] = '\0';
	return (dest);
}



