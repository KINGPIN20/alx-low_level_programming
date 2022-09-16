#include "main.h"

/**
* largest_number - returns largest 3 numbers
* @a: first integer
* @b: second integer
* @c: third number
*/

int largest_number(int a, int b, int c)
{
int largest;
if (a >= b a && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
