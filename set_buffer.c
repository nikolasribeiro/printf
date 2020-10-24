#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
/**
* _write_buffer - function that writes to the buffer
* @buffer: takes in a buffer pointer
* @index: takes in an index pointer
*/
void _write_buffer(char *buffer, int *index)
{
	write(1, buffer, *index);
}
/**
* _copy_of_memory - function copies n bytes from memory
* @dest: the destination
* @src: the src
* @max: the number of bytes to write
*
* Return: char pointer/array
*/
char *_copy_of_memory(char *dest, char *src, unsigned int max)
{
	unsigned int i;

	for (i = 0; i < max; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
