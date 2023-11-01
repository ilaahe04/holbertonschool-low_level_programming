#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *leet - Entry point
 *
 * @str: 'var'
 * Return: Always 0 (Success)
 */
char *leet(char *str)
{
	int i, j;

	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char n[] = {4, 3, 0, 7, 1};

	for  (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
				str[i] = n[j] + '0';
		}
	}
	return (str);
}
