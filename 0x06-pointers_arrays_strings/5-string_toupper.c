#include "main.h"

/**
 * string_toupper - function that converts string to uppercase
 * @str: string
 * Return: s
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
