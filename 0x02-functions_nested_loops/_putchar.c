#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charachter c to stdout
 * return: on sucess 1.
 * on error, -1 is returnde, and errors is set approprieatly
 */
int _putchar(char)
{
	return(write(1, &c, 1));
}
