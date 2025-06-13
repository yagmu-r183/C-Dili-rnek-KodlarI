#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int dizi[10],i;
	
	
	for(i=0;i<10;i++)
	{
		printf("dizinin %d. elemanini gir:",i+1);
		scanf("%d",&dizi[i]);
		
    }
		
	printf("\ndizinin orjinal hali: ");
	
	for(i=0;i<10;i++)
    {
    	printf("%d ",dizi[i]);
	}
		
    printf("\ndizinin tersi: ");
    for(i=9;i>=0;i--)
    {
    	printf("%d ",dizi[i]);
    	
	}
		
	
	 
	
	return 0;
}
