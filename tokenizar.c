#include "monty.h"
/**
 * tokenizar - make token for the current line 
 * 
 * @line: Pointer to the current line
 * @i: Number of the line
 * @check_token: Integer
 * @return int 
 */

int tokenizar(char *line, int i, int check_token)
{
    char *code;
    char *value;

    if (line == NULL)
    {
        printf("Error: \n");
        exit(EXIT_FAILURE);
    }
        
    code = strtok(line, "\t\n ");
    if (code == NULL)
        return (0);
    value = strtok(NULL, "\t\n ");
<<<<<<< HEAD
/Test if i got the code and the value right/
=======
/*Test if i got the code and the value right*/
>>>>>>> 5ce306adb021ea8e9ebb4f39a2615d467de0ec2e
/*   printf("\n%s :%d", code, i);*/
/*    printf("\n%s :%d\n", value, i);*/
    get_function(code, value, i);

return(check_token);
<<<<<<< HEAD
}
=======
}
>>>>>>> 5ce306adb021ea8e9ebb4f39a2615d467de0ec2e
