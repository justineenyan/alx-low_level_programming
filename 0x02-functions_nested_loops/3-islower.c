#include "main.h"
/**
 * _islower - checks if the character is a lowercase
 * Return 1 or 0
 * @c: the character to check
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
