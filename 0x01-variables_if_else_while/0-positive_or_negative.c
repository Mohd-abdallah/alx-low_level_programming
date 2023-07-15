#include <stdlib.h>
#include <time.h>
/*
 * This program will assign a random number to the variable n
 * each time it is executed.
 */

/*
 * Main - this function generates a random number
 * then checks if it's positive or negative.
 *
 * Return 0 at the end
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is Zero\n", n);
	} else
	{
		printf("%d is is negative\n", n);
	}
	return (0);
}
