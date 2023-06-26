#include "main.h"
#include <stdio.h>

/**
 * _puts: prints string
 * @str: prameter for f
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
