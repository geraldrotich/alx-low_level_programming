#include "main.h"
/**
 * rev_string - function
 *
 * @s: pointer of parameter
 */
void rev_string(char *s)
{
	char temp;
	int length = 0;
	int b = 0;
	int c;

	while (s[length] != '\0')
		length++;
	c = length - 1;
	length /= 2;
	while (length--)
	{
		temp = s[b];
		s[b] = s[c];
		s[c] = temp;
		b++;
		c--;
	}
}
