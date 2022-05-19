CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

main: *.c
	$(CC) $(CFLAGS) *.c -o monty && ./monty bytecodes/09.m