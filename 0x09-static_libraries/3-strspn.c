/*
 * File: 3-strspn.c
 */

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int b, r;
	int c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] != 32)
		{
			for (r = 0; accept[r] != '\0'; r++)
			{
				if (s[b] == accept[r])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
