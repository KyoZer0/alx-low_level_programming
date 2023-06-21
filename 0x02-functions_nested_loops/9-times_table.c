#include "main.h"

/**
 * times_table - prints times table from 0 to 9
 *
 * @void: does not take any parameters
 *
 */
void times_table(void)
{
	int x = 0;
	int y = 0;

	for (; x < 10; x++)
	{
		for (; y < 10; y++)
		{
			if (((x * y) >= 10) || (x * (y + 1)) >= 10)
			{
				if ((x * y) >= 10)
					_putchar(((x * y) / 10) + '0');
				_putchar(((x * y) % 10) + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((x * y) + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		y = 0;
		_putchar('\n');
	}
}
