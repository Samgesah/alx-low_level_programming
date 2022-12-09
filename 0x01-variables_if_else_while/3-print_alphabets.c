#include <stdio.h>
/**
  * main -entry point
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	char S, B;

	for (S = 'a'; S <= 'z'; S++)
	putchar(S);
	for (B = 'A'; B <= 'Z'; B++)
	putchar(B);
	putchar('\n');
	return (0);
}
