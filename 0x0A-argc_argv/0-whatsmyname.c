#include <stdio.h>
#include "main.h"

/**
 * main: prints the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
