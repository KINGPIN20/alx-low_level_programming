#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 26; i > 1; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

