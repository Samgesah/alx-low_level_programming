#include "main.h"
/**
  * factorial - gets the factorial of n
  *@n: integer
  * Return: integer value
  * on error -1
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	n = n * factorial(n - 1);
	return (n);
}
