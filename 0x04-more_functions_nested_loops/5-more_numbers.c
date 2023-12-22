#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 * main - uses built in function
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, num;
	char nums;

	i = 0;
	while (i < 10)
	{
		for (num = '0'; num <= '9'; num++)
		{
			_putchar(num);
		}
		for (nums = 10; nums <= 14; nums++)
		{
			_putchar(nums);
		}
		_putchar('\n');
		i++;
	}
}
