#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int n = 0;
	while (s[n] != '\0')
	{
	putchar(s[n]);
	n++;
	}
	return (0);
}
