#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int n=0,i;
	float pn;
	while (pn<100)
	{
	     n++;
		pn=n*(3*n-1)/2;
		if (pn<=100)
		{
			printf("%.3f\n",pn);
	   
		}
	     
	
	}
	return 0;
}
