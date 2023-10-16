#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 48; l <= 57; l++)
	{
	putchar(l);
	if (l != 57)
	{
	putchar(',');
	putchar(' ');
	}
	putchar('\n');

	return (0);
}
