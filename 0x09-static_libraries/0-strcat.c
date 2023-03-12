/*
 * File: 0-strcat.c
 */

#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: string
 * @src: string
 *
 * Return: pointer to resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
	int p, r;

	for (p = 0; dest[p] != '\0'; p++)
		;

	for (r = 0; src[r] != '\0'; r++)
	{
		dest[p] = src[r];
		p++;
	}

	dest[p] = '\0';
	return(dest);
}
