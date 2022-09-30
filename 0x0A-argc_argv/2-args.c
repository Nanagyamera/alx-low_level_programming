#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}

