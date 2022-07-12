#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isprime(int input)
{
	
	for (int i = sqrt(input); i > 1; i--)
	{
		if(input % i == 0)
		{
			return false;
		}
	return true;
}
