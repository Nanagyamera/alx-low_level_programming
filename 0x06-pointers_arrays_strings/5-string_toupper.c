#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: s
 */

char *string_toupper(char *)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] -= 32;
		}
	}
	return (s);
}
