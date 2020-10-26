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

<<<<<<< HEAD
=======
	n = va_arg(valist, int);
	binary = "01";
	binary2 = malloc(33 * sizeof(char));
	if (binary2 == NULL)
		return (0);
>>>>>>> 19106d8e2d7ae08754e91668122c96e64ac0db9d
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
<<<<<<< HEAD

	rev_string(s);
	b[i] = '\0';

	return (b);
=======
	free(binary2);

	return (ii);
>>>>>>> 19106d8e2d7ae08754e91668122c96e64ac0db9d
}
