#include "main.h"

/**
 * _abs - checks the absolute value of an integer
 * @num: variable checks the absolute value of an integer
 * Return: num if successful
 */

int _abs(int num)
{
	if (num < 0)
		num *= -1;
	return (num);
}
