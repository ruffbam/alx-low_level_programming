#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
 */

int main(void)
{
	char *h = "main.h\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
	return (0);
}

