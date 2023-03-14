/*
 * File: 1-strdup.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: if str == NULL or if insufficient memory was available - NULL
 *          otherwise - a pointer to the copied string.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == 0)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(str) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
