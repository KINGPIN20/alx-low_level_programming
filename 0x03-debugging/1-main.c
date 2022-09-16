#include <stdio>

/*
*main - cause infinite loop
*Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0; /** assign value 0 to i **/

while (i < 10) /** conditional statement **/
{
putchar(i); /** prints the processed values of i **/
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}
