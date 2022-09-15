#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the trianglel
 * Return: returns nothing
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i =1; i <= size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(' ')
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
