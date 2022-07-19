#include <stdio.h>

int main(void)
{
  int n;
  int total = 0;
    
    while (total < 10)
    {
  		for (n = 0; n < 15; n++)
  	{
		if ( n >= 10)
		{
     		putchar(n / 10 + '0');   
		}
		putchar(n % 10 + '0');   

   		}
      	total++;
    }
             putchar('\n');
  
  return (0);
}
