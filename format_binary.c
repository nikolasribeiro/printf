#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* typeformat_b - function to convert to unsigned integer to binary
* @valist: taking in arguments
* @bi: char pointer
* @i: integer pointer
* Return: integer
*/

int format_b(va_list b)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(b, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
