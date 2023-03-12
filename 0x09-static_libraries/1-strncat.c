/*
 * File: 1-strncat.c
 */

#include "main.h"

/**
 * *_strncat - concentrates two strings
 * @dest: string
 * @src: string
 * @n: number of elements to be concentrate in
 *
 * Return: pointer to resulting 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int t, s;

	for (t = 0; dest[t] != '\0'; t++)
		;

	for (s = 0; src[s] != '\0' && n > 0; s++, n--, t++)
	{
		dest[t] = src[s];
	}

	return (dest);
}
