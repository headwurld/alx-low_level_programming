#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *  Description: Prints numbers in base 16, from 0 to 9 and then a to f
  * Return: Always 0 (Success)
  */

int main(void)
{

	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	}

	for (low = 'a'; low <= 'f'; low++)
	{
	putchar(low);
	}

	putchar('\n');

	return (0);
}
