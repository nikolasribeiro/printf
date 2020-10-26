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

int typeformat_b(va_list valist, char *bi, int *i)
{
	unsigned int n;
	int ii;
	char *binary;
	char *binary2;

	n = va_arg(valist, int);
	binary = "01";
	binary2 = malloc(33 * sizeof(char));
	if (binary2 == NULL)
		return (0);
	if (n == 0)
	{
		bi[*i] = '\0';
		*i = *i + 1;
	}
	else
	{
		for (ii = 0; n != 0; ii++)
		{
			binary2[ii] = binary[n % 2];
			n /= 2;
		}
		for (ii--; ii >= 0; *i = *i + 1, i--)
		{
			bi[*i] = binary2[ii];
		}
	}
	free(binary2);

	return (ii);
}
