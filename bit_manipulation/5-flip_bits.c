#include <stdio.h>
#include "main.h"
/**
 * flip_bits - gets the number of bits flipped form n to m
 * @n: initial lu int
 * @m: secondary lu int
 *
 * Return: number of bits need to flip to get from `n to `m`
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, res = n ^ m;

	while (res != 0)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
