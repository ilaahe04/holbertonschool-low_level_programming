#include <stdio.h>
#include <stdlib.h>
/**
 * main - prototype
 * Return: 0
 */
int main (void)
{
	char *buff = malloc(1024);
	size_t len = 1024;

	while (1)
	{
		printf("#cisfun$ ");
		getline(&buff, &len, stdin);
		printf("%s", buff);
	}
	return (0);
}
