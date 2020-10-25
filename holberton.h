#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);

/**
* struct format - This is a typedef struct.
* @opt: Pointer type char.
* @call_fun: Pointer to call the function.
*/

typedef struct format
{
	char *opt;
	void (*call_fun)();
} format_t;

void _write_buffer(char *buffer, int *index);
void reset_buffer(char *buffer);
char *_copy_of_memory(char *dest, char *src, unsigned int max);
int _printf(const char *format, ...);
void set_string(va_list valist);
void set_char(va_list valist);
int _putchar(char c);
void new_line();
void format_perc(void)
void set_decimal(va_list valist);
int length_of_integer(int n);
#endif
