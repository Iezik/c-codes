#include <stdio.h>
#include <time.h>

/** 
 * main - generates a psuedo random number with values from the time
 * Return: 0 else 1
 */

int main(void)
{
	srand(time(NULL));
	int rando = rand();

	/**
	 * The following code shortens the length of the generated number to a
	 * desired length by reducing the numerica value
	 */
	int maxvalue = 25;
	/** The modulus operator becomes pretty handy here */
	printf("%i\n", rando % (maxvalue + 1));
	return (0);
}
