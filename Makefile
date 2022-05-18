CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

main: main.c tokenizar.c file_manipulation.c
	$(CC) $(CFLAGS) file_manipulation.c tokenizar.c main.c -o monty && ./monty bytecodes/000.m