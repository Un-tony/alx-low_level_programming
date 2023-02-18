/*
 * File: 8-print_base16.c
 */

#include <stdio.h>

/**
 * main - prints all the numbers
 *  of base 16 in lowercase
 *
 *  Return: 0
 */
int main(void)
{
	int n;
	char letter;

	{
		for (n = 0; n <= 9; n++)
			putchar((n % 10) + '0');
	}

	{
		for (letter = 'a'; letter <= 'f'; letter++)
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
