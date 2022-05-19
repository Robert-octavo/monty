CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

main: main.c tokenizar.c file_manipulation.c function_call.c get_function.c new_node.c _push.c _pall.c _free.c _nop.c
	$(CC) $(CFLAGS) tokenizar.c file_manipulation.c function_call.c get_function.c new_node.c _push.c _pall.c _free.c _nop.c main.c -o monty && ./monty bytecodes/00.m