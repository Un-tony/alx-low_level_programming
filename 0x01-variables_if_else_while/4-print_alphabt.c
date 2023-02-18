/*
 * File: 4-print_alphabt.c
 */

#include <stdio.h>

/**
 * main - prints all alphabet letters
 *  in lower case except 'q' and 'e'
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
