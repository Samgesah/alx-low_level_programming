#include <stdio.h>
/**
  *main - entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int i;
	char h;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (h = 'a'; h <= 'f'; h++)
	putchar(h);
	putchar('\n');
	return (0);
}
