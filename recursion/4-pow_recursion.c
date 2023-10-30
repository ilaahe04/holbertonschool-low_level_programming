#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Calculates pow number.
 * @x: number
 * @y: number
 * Return: facorial number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
