#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* set_string - specificer s
* @valist: valist
* Return: void
*/
int set_string(va_list valist)
{
	int i, count = 0;
	char *s;

	s = va_arg(valist, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		count++;
	}

	return (count);
}

/**
* set_char - specificer c
* @valist: valist
* Return: void
*/
int set_char(va_list valist)
{
	char s;

	s = va_arg(valist, int);

	if (s == '\0')
	{
		return (0);
	}

	_putchar(s);

	return (1);
}
