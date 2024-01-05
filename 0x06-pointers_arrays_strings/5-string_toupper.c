#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase characters to uppercase
 * @str: string
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	char *temp = str;

	while (*temp != '\0')
	{
		*temp = toupper(*temp);
		temp++;
	}
	return (str);
}
