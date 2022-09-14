#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: is the int that will use for the argument of the function
 * Return: returns 0 or 1 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
