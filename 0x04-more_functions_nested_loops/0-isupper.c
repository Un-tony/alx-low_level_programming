/*
 * File: 0-isupper.c
 */

#include "main.h"

/**
 * _isupper -  checks for uppercase character.
 * @c: the number to be checked
 *
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
