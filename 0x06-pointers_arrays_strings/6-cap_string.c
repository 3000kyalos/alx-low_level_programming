#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int capNext = 1;

	while (*str != '\0')
	{
		if (isspace(*str))
		{
			capNext = 1;
		}
		else if (capNext)
		{
			*str = toupper(*str);
			capNext = 0;
		}
		str++;
	}
	return (str);
}
