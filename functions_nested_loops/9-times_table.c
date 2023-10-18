#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (r < 10)
				{
					_putchar('0' + r);
				}
				else
				{
					_putchar('0' + r / 10);
					_putchar('0' + r % 10);
				}
		}

		_putchar('\n');
	}
}
