#include "main.h"

/**
 * print_alphabet - function to print abc
 *
 * Return: Success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	putchar('\n');
}
