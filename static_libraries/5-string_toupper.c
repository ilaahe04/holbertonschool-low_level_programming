#include "main.h"
#include <string.h>
/**
 * *string_toupper - Entry point
 *
 * @upper: 'var'
 * Return: Always 0 (Success)
 */

char *string_toupper(char *upper)
{
	 int i;

	for (i = 0; upper[i] != '\0'; i++)
	{
		if (upper[i] >= 'a' && upper[i] <= 'z')
		{
			upper[i] -= 32;
		}
	}
	return (upper);
}
