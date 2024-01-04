#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: first string
 * @src: seconf string
 * main - uses built in function
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
		;
	for (; *src != '\0'; src++)
	{
		*temp = *src;
		temp++;
	}
	*temp = *src;
	return (dest);
}
