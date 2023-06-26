#include "main.h"
#include <stdio.h>

/**
 * puts: this what finction
 * @str: is the string
 * Return: alswsa 0.
 */
void puts(char *str)
{
	int i;

	for(i = 0; i < strlen(str); i +=2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
