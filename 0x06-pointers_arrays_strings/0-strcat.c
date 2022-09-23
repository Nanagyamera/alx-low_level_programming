#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: second string to be concatenates to src
 * @src: first string to be concatenates to dest
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
