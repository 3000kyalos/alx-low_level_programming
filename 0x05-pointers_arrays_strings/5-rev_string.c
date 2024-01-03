#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * _strlen - checks string length
 * @s: string to reverse
 * main - uses built in function
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int length, start, end;

	length = strlen(s);
	start = 0;
	end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
