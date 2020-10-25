#include "holberton.h"

int _printf(const char *format, ...)
{
	int i, j;
	va_list valist;

	format_t get_opt[] = {
		{"c", set_char}, {"s", set_string}, {NULL, NULL}
	};

	if (!format)
	{
		return (-1);
	}

	va_start(valist, format);
	for (i = 0; format[i] != '\0' && format != NULL; i++)
	{
		if (format[i] == '\0')
		{
			break;
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
	}
	va_end(valist);
	return (0);
}
