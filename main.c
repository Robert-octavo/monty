#include "monty.h"

/**
 * main - monty
 * @argc: integer number of arguments
 * @argv: Array with the arguments
 * Return: Always zero
 */

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		dprintf(2,"USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
	{
/*Check for the file - if i get the path from argv*/
/*		printf("First %s \n", argv[1]);*/
		o_file(argv[1]);
	}
	_free();
	return (0);
}
