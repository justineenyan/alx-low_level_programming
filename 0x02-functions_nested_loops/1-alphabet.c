#include "main.h"
/**
 *main - prints alphabets in lowercases
 *Return: always 0
 */
void print_alphabet(void);
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

	return (0);
}
