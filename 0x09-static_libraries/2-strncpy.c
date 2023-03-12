/*
 * File: 2-strncpy.c
 */

#include "main.h"

/**
 * *_strncpy - copies a string.
 * @dest: string
 * @src: string
 * @n: number of elements to copy over
 *
 * Return: 'dest' edited string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != 0; a++)
		dest[a] = src[a];

	for (; n > a; a++)
		dest[a] = '\0';

	return (dest);
}
