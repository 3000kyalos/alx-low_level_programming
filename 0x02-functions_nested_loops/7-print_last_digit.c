#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * main - uses built in function
 * @num: variable to store a number
 * Return: num on (Success)
 */

int print_last_digit(int num)
{
	num %= 10;

	if (num < 0)
		num *= -1;
	num += 48;
	_putchar(num);
	return (num - '0');
}
