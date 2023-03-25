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
	for (int hour = 0; hour < 24; hour++)
		for (int minute = 0; minute < 60; minute++)
		{
			_putchar("%02d:%02d\n", hour, minute);
		}
}
