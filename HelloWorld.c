
#include <stdio.h>
#include <stdint.h>

#define lim 10

int main()
{
	uint32_t a = 0,b = 0,c = 0;
	uint16_t u,i;
	i=0;
	u = 12;
	
	for (i = 0; i<=lim; i++)
	{

		
		a = a + u--;
		b = b + u++;
		c = a - b;
		
		printf("a tiene el valor: %u \r\n", a); 
		printf("b tiene el valor: %u \r\n", b); 
		printf("c tiene el valor: %u \r\n", c); 
	}

	return 0;
} 