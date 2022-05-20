#include "monty.h"
/**
 * get_function - Get the function object
 *@code: Puntero con el opcode
 *@value: Value for the operaticion
 *@i: Line number
 */
void get_function(char *code, char *value, int i)
{
	int j, check;
	instruction_t function_list[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"nop", _nop},
		{"add", _add},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{NULL, NULL}
	};
/*Check for # comments in monty*/
	if (code[0] == '#')
		return;
	for (check = 0, j = 0; function_list[j].opcode != NULL; j++)
	{
/*compare with strcmp what i got on code and in the current position*/
		if (strcmp(code, function_list[j].opcode) == 0)
		{
/*			printf("es la funcion que necesito\n");*/
/*call the function and pass the code and the value we have from the file*/
			function_call(function_list[j].f, code, value, i);
/*this is to know if it found the function*/
			check = 1;
		}
	}
/*it didn't found the function*/
	if (check == 0)
	{
/*print the messaje de line number and the opcode*/
		dprintf(2, "L%d: unknown instruction %s\n", i, code);
		/*liberar node ?????*/
		_free();
		exit(EXIT_FAILURE);
	}

}
