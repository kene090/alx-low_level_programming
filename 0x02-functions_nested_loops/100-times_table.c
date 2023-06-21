#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		for (int i = 0; i <= n; i++)
		{
			print_times_row(i, n);
		}
	}
}

/**
 * print_times_row - prints a single row of the times table
 * @row_num: row number to print
 * @n: number of the times table
 */
void print_times_row(int row_num, int n)
{
	for (int col_num = 0; col_num <= n; col_num++)
	{
		int product = row_num * col_num;

		if (col_num == 0)
		{
			_putchar(product + '0');
		}
		else if (product < 10)
		{
			print_times_cell(product, 3);
		}
		else if (product < 100)
		{
			print_times_cell(product, 2);
		}
		else
		{
			print_times_cell(product, 1);
		}
	}
	_putchar('\n');
}

/**
 * print_times_cell - prints a single cell of the times table
 * @value: value to print
 * @padding: number of spaces for padding
 */
void print_times_cell(int value, int padding)
{
	_putchar(',');
	_putchar(' ');

	for (int i = 0; i < padding; i++)
	{
		_putchar(' ');
	}

	_putchar(value + '0');
}
