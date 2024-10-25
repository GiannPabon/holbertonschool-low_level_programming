#include "main.h"
/**
 * jack_bauer - main funrtion
 *
 *
 */

void jack_bauer(void)
{

int hour;
int minute;

	for (hour = 0; hour < 24; hour++)
{
	for (minute = 0; minute < 60; minute++)
	{
	/* Use _putchar to print each character */
	_putchar((hour / 10) + '0');  /* Print the tens digit of the hour*/
	_putchar((hour % 10) + '0');  /* Print the ones digit of the hour*/
	_putchar(':');
	_putchar((minute / 10) + '0');  /* Print the tens digit of the minute*/
	_putchar((minute % 10) + '0');  /* Print the ones digit of the minute*/
	_putchar('\n');
	}
}

}
