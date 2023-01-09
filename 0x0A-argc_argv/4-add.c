#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *isNumber - check if a string is a number
  *@s: string
  *Return: on success 1
  */

char isNumber(char *s)
{
	int j;

	j = strlen(s);
	while (j--)
	{
		if (s[j] > 47 && s[j] < 58)
			continue;
		return (0);
	}
	return (1);
}
/**
  *main - checks the code
  *@argc: argument count
  *@argv: argument vector
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i, sum = 0, flag = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
				flag = 1;
		}
	}
	if (flag == 0)
		printf("%d\n", sum);
	else
		printf("Error\n");
	return (0);
}
