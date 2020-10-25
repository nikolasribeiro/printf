#include "holberton.h"
/**
* _printf - function that prints based on format specifier
* @format: takes in format specifier
* Return: return pointer to index
*/
int _printf(const char *format, ...)
{
	int i, j;
	va_list valist;
	format_t get_opt[] = {
		{"c", set_char}, {"s", set_string},
		{"i", set_decimal}, {"d", set_decimal},
		{"%", format_perc},
		{NULL, NULL}
	};
	if (!format)
	{
		return (-1);
	}
	va_start(valist, format);
	for (i = 0; format[i] != '\0' && format != NULL; i++)
	{
		if (format[i] == '\0')
			break;
		if (format[i] == '\n')
		{
			_putchar('\n');
		}
		if (format[i] == '%')
		{
			i++;
			for (j = 0; get_opt[j].opt != NULL; j++)
			{
				if (format[i] == get_opt[j].opt[0])
				{
					get_opt[j].call_fun(valist);
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(valist);
	return (0);
}
