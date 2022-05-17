#include "monty.h"
/**
 * get_function - Get the function object
 * 
 */
void get_function()
{
    instruction_t function_list[] = {
        {"push", _push},
        {"pall", _pall},
        {"pint", _pint},
        {"pop", _pop},
        {"swap", _swap},
        {"nop", _nop},
        {"add", _add},
        {NULL, NULL}
    };
}