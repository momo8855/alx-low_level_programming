#include "main.h"

/**
  * jack_bauer - Entry Point
  *
  * Description: print every minute of the day
  *
  * Return: 0 always (Success)
  */
void jack_bauer(void)
{
	int minute, hour;

	for (hour = 0; hour < 24; hour++)
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
		}
}
