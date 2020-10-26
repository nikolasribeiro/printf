#include "holberton.h"
/**
* set_decimal- function that returns an int to signed decimal
* @valist: arguments passed
* Return: length of integers
*/
int set_decimal(va_list valist)
{
	int i;

	i = va_arg(valist, int);
	return (length_of_integer(i));
}

/**
* length_of_integer - function that returns an int to signed decimal
* @n: integer
* Return: length of the integer
*/
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
		return (1 + length_of_integer(n / 10));
	}
}
