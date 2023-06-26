#include "main.h"
#include <unistd.h>

/**
 * this function writes the character c to stdout
 *
 * Return: On success 1
 * On error: -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
