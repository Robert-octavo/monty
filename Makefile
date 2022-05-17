CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

main: main.c tokenizar.c
	$(CC) $(CFLAGS) tokenizar.c main.c -o monty && ./monty bytecodes/00.m