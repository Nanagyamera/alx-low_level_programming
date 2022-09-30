#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%s\n", *argv);

	return (0);
}
