#include <stdlib.h>
#include <time.h>
/**
 *main - Main function
 *
 *Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf(n, "%d\n is  positive.");
	}

	else
	{
	printf(n, "%d\n is negative.");
	}
	return (0);
}
