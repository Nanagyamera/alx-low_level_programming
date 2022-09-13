#include "main.h"

/**
 * print_alphabet - function to print the alphabet
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
