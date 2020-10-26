#include "holberton.h"

/**
 * rot13 - changes the alphabet.
 *
 * @s: the string to change.
 *
 * Return: a char pointer.
 */

int *rot13(char *s)
{
	int i = 0, j = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(s + i) == letters[j])
			{
				*(s + i) = rot13[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
