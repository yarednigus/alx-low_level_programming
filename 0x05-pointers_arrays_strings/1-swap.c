#include "main.h"
#include <stdio.h>

/**
 * swap_int- swaps the value of the two parametedrs.
 * @a: input
 * @b: the parameteas.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
