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

int *typeformat_b(va_list valist)
{
	unsigned int n = va_arg(valist, unsigned int);
	int i;
	char *binary;
	char b[1024];

	binary = b;
	i = 0;
	
	if (n == 0)
	{
		b[++i] = '\0';
	}
	
	while (n != 0)
	{
		b[i] = (n % 2) + '0';
		i++;
		n /= 2;
	}
	rev_string(b);
	b[i] = '\0';

	return (binary);
}
