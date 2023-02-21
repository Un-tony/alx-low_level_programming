/*
 * File: 6-abs.c
 */

#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 * @i: the number to be computed
 *
 * Return: Absolute value of number or zero
 */
int _abs(int i)
{
	if (i < 0)
	{
		int abvl;

		abvl = i * -1;

		return (abvl);
	}

	return (i);
}
