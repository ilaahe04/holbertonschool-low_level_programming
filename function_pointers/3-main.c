#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - function
 * @argc: numner og argument
 * @argv: argv
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *op = argv[2];
	int a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);
	if ((*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '%')
			|| strlen(op) > 1)
		printf("Error\n"), exit(99);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((*op == '/' || *op == '%') && b == 0)
		printf("Error\n"), exit(100);
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
