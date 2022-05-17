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
    /*to test the tokenizar fuction*/
    int check_token;

    int file_exist = 0;
    FILE *file;

    /*Variables for Read the File*/
    char *line = NULL;
    size_t n = 0;
    /*count the lines*/
    int i;
    check_token = 0;
    if (argc > 2)
        printf("Error, To Many Arguments\n");
    else
    {
/*Check for the file*/
        printf("First %s \n", argv[1]);
        /*FILE *file;*/
        if (argv[1] == NULL)
            printf("Error");
        /*file exist*/
        file_exist = access(argv[1], F_OK);
        /*if the return of access it is -1 - cannot acces the file*/
        if (file_exist == -1)
            printf("Error");
        file = fopen(argv[1], "r");
        if (file == NULL)
            printf("Error");
        /* Read the File*/
        for (i = 1; getline(&line, &n, file) != EOF; i++)
        {   /*Test to Know if we are readind the files*/
            /*printf("%s", line);*/
            check_token = tokenizar(line, i);
            printf("\n from main: %d ", check_token);
        } 
    }
    return (0);
}