#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <stdarg.h>

int _printf(const char *format, ...);

/**
 * struct format - This is a typedef struct.
 * @operator: Pointer type char.
 * @call_fun: Pointer to call the function.
 */

typedef struct format
{
	char *operator;
	void (*call_fun)();
} format_t;

void _write_buffer(char *buffer, int *index);
void reset_buffer(char *buffer);
char *_copy_of_memory(char *dest, char *src, unsigned int max);
int _printf(const char *format, ...);
void set_string(va_list valist, char *buffer, int *index);
void set_char(va_list valist, char *buffer, int *index);
#endif
