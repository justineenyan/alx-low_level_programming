#include "main.h"
/**
 * print_last_digit - prints the last digits
 * @n: the parameter
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
