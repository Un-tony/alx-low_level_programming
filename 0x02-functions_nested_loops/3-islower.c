/*
 * File: 3-islower.c
 */

#include "main.h"

/**
 * main -  checks for lowercase character.
 *
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
