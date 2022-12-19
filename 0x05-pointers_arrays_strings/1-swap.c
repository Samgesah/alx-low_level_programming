#include "main.h"
/**
  *swap_int - swaps two integers
  *@a: a pointer to be swapped
  *@b: a pointer to be swapped
  *Return: nothing
  */
void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
