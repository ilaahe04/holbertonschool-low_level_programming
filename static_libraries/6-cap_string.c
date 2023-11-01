#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *cap_string - Entry point
 *
 * @upper: 'var'
 * Return: Always 0 (Success)
 */

char *cap_string(char *upper)
{
	int i;

	for (i = 0; upper[i] != '\0'; i++)
	{
		if (i == 0 && upper[i] >= 97  && upper[i] <= 122)
			upper[i] -= 32;
		if (upper[i + 1] >= 97 && upper[i + 1] <= 122)
		{
			if (upper[i] == 32 || upper[i] == 10 || upper[i] == 9)
				upper[i + 1] -= 32;
			else if (upper[i] == 44 || upper[i] ==  59 || upper[i] == 46)
				upper[i + 1] -= 32;
			else if (upper[i] == 33 || upper[i] == 63 || upper[i] == 34)
				upper[i + 1] -= 32;
			else if (upper[i] == 40 || upper[i] == 41)
				upper[i + 1] -=  32;
			else if (upper[i] == 123 || upper[i] == 125)
				upper[i + 1] -= 32;
		}
	}
	return (upper);
}
