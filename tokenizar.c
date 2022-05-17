#include "monty.h"
/**
 * tokenizar - make token for the current line 
 * 
 * @line: Pointer to the current line
 * @i: Number of the line
 * @return int 
 */

int tokenizar(char *line, int i)
{
    char *code;
    char *value;

    if (line == NULL)
        printf("Error");
    code = strtok(line, "\n ");
    if (code == NULL)
        return (0);
    value = strtok(NULL, "\n ");
/*Test if i got the code and the value right*/
    printf("\n%s :%d", code, i);
    printf("\n%s :%d\n", value, i);

return(0);
}