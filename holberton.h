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
char *_copy_of_memory(char *dest, char *src, unsigned int max);
#endif
