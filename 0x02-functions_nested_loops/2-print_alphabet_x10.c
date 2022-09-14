#include "main.h"

/**
* print_alphabet_x10 - prints alphabets 10 times
*
* Return: 1 Always success
*/

void print_alphabet_x10(void)
{
int c = 0;
char a;
for (c = 0; c <= 9; c++)
{
for (a = 'a'; a <= 'z'; a++)

_putchar(a);
_putchar('\n');
}
}
