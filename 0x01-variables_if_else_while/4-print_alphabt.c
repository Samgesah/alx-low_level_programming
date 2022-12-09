#include <stdio.h>
/**
  *main - entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	char i, e, q;

	e = 'e';
	q = 'q';
	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != e && i != q)
	putchar(i);
	}
	putchar('\n');
	return (0);
}

