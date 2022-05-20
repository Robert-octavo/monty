#include "monty.h"
/**
 * main - monty
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
/*Create a test and monty files, put it into the 
* folder - monty files are the test for the mandatory
* task.
* Create a Makefile
* Basic Main to test the makefile and the amount of
* arguments passed
*/
int main (int argc, char* argv[])
{
    if (argc < 2 || argc > 2)
        printf("Error, Too Many Arguments\n");
    else
        printf("First %s \n", argv[1]);
    return (0);
}