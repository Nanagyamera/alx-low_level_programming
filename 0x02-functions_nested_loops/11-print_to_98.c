#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * @n :the number to begin counting at
 */
void print_to_98(int n)
{
	if (n >= 0)
	{
		while(n >= 98)
			printf("%d, ", n --);
		printf("%d\n", n);
	}
	else
	{
		where(n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
i}