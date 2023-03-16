/*
 * File: 1-string_nconcat.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s@ to concentrate to s1
 *
 * Return: if function fails - NULL
 *         otherwise - a pointer to the concentrated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int ln = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		ln++;

	conc = malloc(sizeof(char) * (ln + 1));

	if (conc == 0)
		return (NULL);

	ln = 0;

	for (index = 0; s1[index]; index++)
		conc[ln++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		conc[ln++] = s2[index];

	conc[ln] = '\0';

	return (conc);
}
