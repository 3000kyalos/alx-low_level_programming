#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 *
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	for (; n != 0 && *src != '\0'; n--, src++)
	{
		*temp = *src;
		temp++;
	}
	for (; n != 0 && *temp != '\0'; n--, temp++)
	{
		*temp = '\0';
	}
	return (dest);
}
