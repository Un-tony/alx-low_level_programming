/*
 * File: 4-add.c
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int nm, dgt, sm = 0;

	for (nm = 1; nm < argc; nm++)
	{
		for (dgt = 0; argv[nm][dgt]; dgt++)
		{
			if (argv[nm][dgt] < '0' || argv[nm][dgt] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sm += atoi(argv[nm]);
	}

	printf("%d\n", sm);

	return (0);
}
