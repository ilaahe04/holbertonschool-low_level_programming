#include "main.h"
#include <stdio.h>
/**
 * _strcat - function also returns a pointer to that string.
 * @dest: This is destiny
 * @src: This is the copia
 *
 * Return: This return copy
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; *(dest + j) != 0; j++)
	{
	}
	for (i = 0; *(src + i) != 0; i++, j++)
	{
		*(dest + j) = *(src + i);
	}
	*(dest + j) = 0;
	return (dest);

}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
