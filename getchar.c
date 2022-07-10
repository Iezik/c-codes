#include <stdio.h>
/**
 * main - takes user name and age and prints or asks about validity
 * depending on which code is active
 * Return: 0 else 1
 */

int main(void)
{
	char name;
	int age;
	
	printf("How old are you? ");
	/**
	 * scanf is used here, scanf introduces a newline character
	 * to the input stream (i.e - 'age\n')
	 */
	scanf("%i", &age);
	
	printf("What is you name? ");
	/**
	 * getchar here is used to remove the newline character '\n' from
	 * the input stream
	 */
	getchar();
	/**
	 * Now scanf can run again without error.
	 * If getchar is not use, a weird fall-through error of code
	 * occurs. This behaviour is usually only seen when attempting
	 * to get characters
	 */
	scanf("%c", &name);

	printf("Name is: %c\n", name);
	printf("Age is: %i\n", age);

	//printf("Are you called %s and aged %i?", name, age);

	return (0);
}
