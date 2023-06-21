#include "main.h"
/**
 *jack_bauer - Print the hours and minutes of the day.
 *
 *Return: The hours and minutes of the day
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour <= 23)
	{
		while (minute <= 59)
		{
			_putchar ((hour / 10) + '0');
			_putchar ((hour % 10) + '0');
			_putchar (':')
			_putchar ((minute / 10) + '0');
			_putchar ((minute % 10) + '0');
			minute++;
		}
		minute = 0;
		hour++;
}
