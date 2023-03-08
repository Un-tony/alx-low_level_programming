/*
 * File: 2-strlen_recursion.c
 */

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int b;

	b = 0;
	if (*s == '\0')
		return (0);

	b = 1 +  _strlen_recursion(s + 1);

	return (b);

}
