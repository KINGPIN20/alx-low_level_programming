#include <stdlib.h>
#include <time.h>
/* program will assign a random number to the variable n */

/* main - assign +/- value for n
 * return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 2) 
	{
		printf(n "is positive\n");
		if (n = 0)
		{ 
			printf(n "is zero]n");
			else {
				printf(n "is negative\n");
			}
		}
	}

	return (0);
}
