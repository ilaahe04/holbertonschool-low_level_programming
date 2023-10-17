#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int r = i * j;

			_putchar(r);
				if (j < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar('\n');
				}
		}
	}
}
