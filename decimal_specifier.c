#include "holberton.h"
/**
* set_decimal- function that returns an int to signed decimal
* @valist: arguments passed
* Return: length of integers
*/
int set_decimal(va_list valist)
{
	int i, div, len;
	unsigned int num;

	i = va_arg(valist, int);
	div = 1;
	len = 0;
	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
	{
		num = i;
	}

	for (; num / div > 9;)
	{
		div *= 10;
	}

	for (; div != 0;)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}

	return (len);
}
