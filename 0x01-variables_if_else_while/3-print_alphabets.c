#include <stdio.h>

/**
 * main - prints upper and lower case
 * return; 0
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
