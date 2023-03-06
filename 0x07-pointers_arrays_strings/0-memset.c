#include "main.h"

/**
 * memset - Entry point
 * @s: pointed destination
 * @b: Constant byte
 * @n: bytes
 * Return: Alway 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
