#include <stdio.h>

/**
 * main - prints upper and lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alx[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alx[i]);
	}
	putchar('\n');
	return (0);
}
