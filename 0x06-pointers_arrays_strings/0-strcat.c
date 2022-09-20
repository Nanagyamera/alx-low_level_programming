#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: second string to be concatenates to src
 * @src: first string to be concatenates to dest
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; &&n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}
