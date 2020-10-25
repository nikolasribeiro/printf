#include "holberton.h"
/**
* format_d - function that returns an int to signed decimal
* @valist: arguments passed
* @buffer: values stored
* @index: tracks index position
*/
void set_decimal(va_list valist)
{
	int i;

	i = va_arg(valist, int);

	printf("Esto es length_of_integer: %i\n",length_of_integer(i));
}

int length_of_integer(int n)
{
	if (n < 0)
	{
		return (1 + length_of_integer(-n));
	}
	else if (n < 10)
	{
		return (1);
	}
	else
	{
		return (1 + length_of_integer(n/10));
	}
}
