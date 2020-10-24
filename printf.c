#include "holberton.h"

int _printf(const char *format, ...)
{
	char buffer[1024];
	int i, j = 0, a = 0, *index = &a;
	va_list valist;

	format_t get_opt[] = {
		{'c', set_char}, {'s', set_string}, {'\0', NULL}
	};
	if (!format)
	{
		return (-1);
	}

	va_start(valist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		for (; format[i] != '%' && format[i] != '\0'; *index += 1, i++)
		{
			if (*index == 1024)
			{
				_write_buffer(buffer, index);
				reset_buffer(buffer);
				*index = 0;
			}
			buffer[*index] = format[i];
		}
		if (format[i] == '\0')
		{
			break;
		}

		if (format[i] == '%')
		{
			i++;
			for (j = 0; get_opt[j].operator != '\0'; j++)
			{
				if (format[i] == get_opt[j].operator[0])
				{	get_opt[j].call_fun(valist, buffer, index);
					break;
				}
			}
		}
	}
	va_end(valist);
	buffer[*index] = '\0';
	_write_buffer(buffer, index);
	return (*index);

}
