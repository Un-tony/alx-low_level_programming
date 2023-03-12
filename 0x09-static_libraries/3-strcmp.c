/*
 * File: 3-strcmp.c
 */

#include "main.h"

/**
 *  _strcmp - compares two strings
 *  @s1: string
 *  @s2: string
 *
 *  Return: negative int if s1 < s2, 0 if matching,
 *  and positive int if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int b;

	for (b = 0; s1[b] != '\0' || s2[b] != '\0'; b++)
	{
		if (s1[b] != s2[b])
			return (s1[b] - s2[b]);
	}

	return (0);
}
