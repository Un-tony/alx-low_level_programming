/*
 * File: 5-strstr.c/
 */

#include <stdlib.h>
#include "main.h"

/**
 * *_strstr - locates a substring.
 * @haystack: the longer string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int b;
	int t = 0;

	while (needle[t] != '\0')
		t++;

	while (*haystack)
	{
		for (b = 0; needle[b]; b++)
		{
			if (haystack[b] != needle[b])
				break;
		}
		if (b != t)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
