#include "main.h"
/**
 * jack_bauer - a function that pritnts every minute of the day of Jack Bauer, s * tarting from 00:00 to 23:59, min loop counts minutes while hour loop counts h * ours and resets minutes
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int remaininghours;
	int remainingminutes;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			remainingminutes = minutes % 10;
			remaininghours = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(remaininghours + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(remainingminutes + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
