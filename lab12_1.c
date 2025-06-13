#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int dizi[10],i,enb1,enb2;
	
	for(i=0;i<10;i++)
	{
		printf("dizinin %d. elemanini gir:",i+1);
		scanf("%d",&dizi[i]);
		
	}
	
	enb1=dizi[0];
	enb2=dizi[0];

	for(i=0;i<10;i++){
		
		if(dizi[i]>enb1)
		{
			enb1=dizi[i];
		}
	}
	for(i=0;i<10;i++)
	{
		if(dizi[i]>enb2 && enb1!=dizi[i])
		{
			enb2=dizi[i];
		}
	}
	printf("en buyuk 1. sayi: %d\nen buyuk 2. sayi:%d",enb1,enb2);
	
	
	
	return 0;
}
