#include <stdio.h>

char copycat(char *dest, char *src)
//void copycat(char *dest, char *src)
{
	int i, j, k;
	 for (i = 0; src[i] != '\0'; i++)
	 {
		 dest[i] = src[i];
	 }
	 dest[i] = '\0';
			 
	return (*dest);
}


int main(void)
{
	char string[] = "Evelyns' ass is sumptuous";
	//still dont knnow how to pass this as an initialization
	char copystring[3];
	
	copycat(copystring, string);

	printf("%s\n", copystring);
	return (0);
}
