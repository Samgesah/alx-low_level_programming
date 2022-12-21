#include "main.h"

/**
  * leet - encode
  *@s: string
  *Return: character
  */

char *leet(char *s)
{
	int i = 0, j = 0;
	char array_leet[] = {"43107"};
	char array_up[] = {"AELOT"};
	char array_low[] = {"aelot"};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == array_low[j] || s[i] == array_up[j])
				s[i] = array_leet[j];
		}
		i++;
	}

	return (s);
}

