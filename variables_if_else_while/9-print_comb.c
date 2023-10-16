#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 1; l < 10; l++)
	{
	putchar(',');
	putchar(' ');
	putchar(1 + '0');
	}
	putchar('\n');

	return (0);
}
