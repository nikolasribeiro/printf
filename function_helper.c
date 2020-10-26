#include "holberton.h"
/**
* base_len - Calculates the length for an octal number
* @num: The number for which the length is being calculated
* @base: Base to be calculated by
* Return: An integer representing the length of a number
*/
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}
