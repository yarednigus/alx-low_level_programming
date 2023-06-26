#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int i, j;
	char temp;
   	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
      		temp = s[i];
      		s[i] = s[j];
     	 	s[j] = temp;
   }
}
