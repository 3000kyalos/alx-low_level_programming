#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days left in the year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2000;

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
