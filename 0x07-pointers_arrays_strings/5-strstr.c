#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *haystackPtr = haystack;
		char *needlePtr = needle;

		while (*needlePtr != '\0' && *haystackPtr == *needlePtr)
		{
			haystackPtr++;
			needlePtr++;
		}
		if (*needlePtr == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
