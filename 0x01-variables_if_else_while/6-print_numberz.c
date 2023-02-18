/*
 * File: 6-print_numberz.c
 */

#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * and using putchar
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
