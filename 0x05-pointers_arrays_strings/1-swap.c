#include "holberton.h"

/**
 *swap_int - change value of var to 98
 *@a: the pointer of var a
 *@b: the pointer of var b
 * Return: success
 **/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

