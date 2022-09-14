#include "stdio.h"

/**
*prints the alphabet, in lowercase, followed by a new line
*Return: 0
*/

int main(void)
{
	int c;
for (c = 97; c <= 122; c++)
{
putchar(c);
}
putchar('\n');
}
