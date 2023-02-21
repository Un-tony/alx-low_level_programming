/*
 * File: 2-print_alphabet_x10.c
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char ch;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');

		i++;
	}
}
