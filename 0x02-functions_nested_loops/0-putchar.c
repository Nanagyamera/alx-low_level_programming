#include <stdio.h>

/**
 * _putchar - writes the character to stdout
 *
 * Return: Success 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
