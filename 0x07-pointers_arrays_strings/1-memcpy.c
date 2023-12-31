#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *srcBytes = src;
	char *destBytes = dest;

	while (n--)
	{
		*destBytes++ = *srcBytes++;
	}
	return (dest);
}
