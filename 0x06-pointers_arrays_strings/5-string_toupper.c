/*
 * File: 5-string_toupper.c
 */

#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @c: string
 *
 * Return: c
 */
char *string_toupper(char *c)
{
	int t;

	for (t = 0; c[t] != '\0'; t++)
	{
		if (c[t] >= 97 && c[t] < 123)
		{
			c[t] -= 32;
		}
	}

	return (c);
}
