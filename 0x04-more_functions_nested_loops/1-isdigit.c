/*
 * File: 1-isdigit.c
 */

#include "main.h"

/**
 *  _isdigit - checks for a digit (0 through 9).
 *  @c: the number to be checked
 *
 *  Return: 1 for a character that will be a digit or 0 for any else
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	return (0);
}
