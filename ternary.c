#include <stdio.h>
/**
 * This just shows how to use a ternary operator
 * It is very similar to a simplified if-statement
 */

int main(void)
{
	int m;
	int c;
	
	m = 255, c = 400;
	
	/**
	 * taking user input
	 * Remove the comment slashes below if you want to test the program
	 */
	//printf("What number do you want m to be? ");
	//scanf("%d", &m);
	//printf("What number do you want c to be? ");
	//scanf("%d", &c);

	//using an if statement
	if(m < c)
		printf("The greater is n \n");
	else
		printf("The greater is m \n");

	/**
	 * Using ternary operator:
	 *
	 * Notice the colon between the printf statements
	 * 
	 * You are basically saying, is m < c?, if so do the first
	 * arg else do the second arg
	 */

	m < c ? printf("The greater is n \n") : printf("The greater is m \n");

	return (0);
}
