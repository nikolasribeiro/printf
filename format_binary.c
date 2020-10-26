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

char typeformat_b(va_list valist)
{
	unsigned int n = va_arg(valist, unsigned int);
	int i = 0;
	char *binary;
	char b;

	binary = b;

	if (n == 0)
	{
		b[++i] = '0';
	}
	while (n != 0)
	{
		b[i] = (n % 2) + '0';
		i++;
		n /= 2;
	}

	rev_string(s);
	b[i] = '\0';

	return (b);

}
