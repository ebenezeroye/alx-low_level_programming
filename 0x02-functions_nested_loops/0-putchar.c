#include "main.h"

/**
 * main - Print the word "_putchar"
 *
 * Return: Alwasy 0 (Success)
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
