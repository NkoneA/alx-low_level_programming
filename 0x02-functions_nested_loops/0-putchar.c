#include "-putchar.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ptc = "-putchar";

	while (ptc)
	{
		_putchar(ptc);
		ptc++;
	}
	_putchar('\n');

	return (0);
}
