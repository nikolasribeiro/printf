#include "holberton.h"

int parse_format(const char *format, format_t get_opt[], va_list valist)
{
	int i, j, count, total_characters;

	for (i = 0; format[i] != '\0'; i++)
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
					count = get_opt[j].call_fun(valist);
					if (count == -1)
					{
						return (-1);
					}
					total_characters += count;
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			total_characters++;
		}
	}

	return (total_characters);
}
