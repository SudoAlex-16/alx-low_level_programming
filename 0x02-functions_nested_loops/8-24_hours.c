#include "main.h"
/**
 * jack_bauer - prints the time
 * Return: return 0 if successful
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int rem_hours;
	int rem_minutes;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			rem_hours = hours % 10;
			rem_minutes = minutes % 10;
			_putchar(hours / 10 + '0');
			_putchar(rem_hours + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(rem_minutes + '0');
		minutes++;
		_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}



