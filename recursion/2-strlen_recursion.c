#include <string.h>
#include "main.h"
/**
 *  _strlen_recursion - Prints length of a string, followed by a new line.
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 +  _strlen_recursion(s + 1));
	return (0);
}
