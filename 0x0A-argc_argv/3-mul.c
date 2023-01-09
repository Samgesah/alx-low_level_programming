#include <stdio.h>
#include <stdlib.h>
/**
  *main - checks the code
  *@argc: argument count
  *@argv: argument vector
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	else
		printf("Error\n");
	return (0);
}

