#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp != '\0')
		temp++;

	while (*src != '\0')
	{
		if (n == 0)
			break;
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	return (dest);
}
