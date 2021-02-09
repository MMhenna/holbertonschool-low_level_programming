#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

/**
 *print_last_digit - give the last digit of a number
 *@n: the number in parameter
 * Return: last digit of n
 */

int print_last_digit(int n)
{
int i = n % 10;
return (i);
}

