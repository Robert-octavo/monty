#include "monty.h"

/**
 * o_file - FUnction that open a file
 * @file_path: Pointer to the argv[1] -(Path /String)
 */
void o_file(char *file_path)
{
	int file_exist = 0;
	FILE *file;

	if (file_path == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", file_path);
		_free();
		exit(EXIT_FAILURE);
	}
/*file exist*/
	file_exist = access(file_path, F_OK);
/*if the return of access it is -1 - cannot acces the file*/
	if (file_exist == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", file_path);
		_free();
		exit(EXIT_FAILURE);
	}

	file = fopen(file_path, "r");
	if (file == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", file_path);
		_free();
		exit(EXIT_FAILURE);
	}

/* Read the File*/
	r_file(file, file_path);
/*close the file*/
	fclose(file);
}


/**
 * r_file - Fucntion that read the content of a file
 * line by line
 * @file: Pointer to the file
 * @file_path: path of the file
 */
void r_file(FILE *file, char *file_path)
{
	/*count the lines*/
	int i = 0;
	int check_token;

	char *line = NULL;
	size_t n = 0;

	check_token = 0;

	if (file == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", file_path);
		_free();
		exit(EXIT_FAILURE);
	}

	for (i = 1; getline(&line, &n, file) != EOF; i++)
	{
/*Test to Know if we are readind the files*/
/*printf("%s", line);*/
		check_token = tokenizar(line, i, check_token);
/*		printf("\n from main: %d ", check_token);*/
	}
	free(line);
}
