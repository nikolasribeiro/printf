#include "holberton.h"
/**
* parse_format - Receives the main string and all the necessary parameters to
* print a formated string.
* @format: A string containing all the desired characters.
* @get_opt: A list of all the posible functions.
* @valist: A list containing all the argumentents passed to the program.
* Return: A total count of the characters printed.
*/
int parse_format(const char *format, format_t get_opt[], va_list valist)
{
	int i, j, count, total_characters = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; get_opt[j].opt != NULL; j++)
			{
				if (format[i + 1] == get_opt[j].opt[0])
				{
					count = get_opt[j].call_fun(valist);
					if (count == -1)
						return (-1);
					total_characters += count;
					break;
				}
			}
			if (format[i] == '\0')
				break;
			if (get_opt[j].opt == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					total_characters = total_characters + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			total_characters++;
		}
	}
	return (total_characters);
}
