#include "monty.h"
/**
 * main - monty
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
/*
* add to the header the prototype (tokenizar)
*/
int main (int argc, char **argv)
{
    if (argc > 2)
    {
        printf("USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    else
    {
/*Check for the file*/
        printf("First %s \n", argv[1]);
        /*FILE *file;*/
        o_file(argv[1]);
    }
    return (0);
}