#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int	i,k,c,a,say=0;
	for(i=100;i<1000;i++)
	{
		k=i%10;
	    a=(i/10)%10;
	    c=i/100;
	    if(k!=a && a!=c && c!=k)
	    {
	    	printf("%d\n",i);
	    	say++;
		}
		
	}
	printf("%d tanedir",say);

	return 0;
}
