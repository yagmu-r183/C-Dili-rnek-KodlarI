#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	int dizi[6]={1,3,5,7,9},i,sayi,j;
	printf("eklenecek sayiyi girin:");
	scanf("%d",&sayi);
	for(i=0;i<5;i++)
	{
		printf("%d",dizi[i]);
	}
	for(i=0;i<5;i++)
	{
		while(i<5 && sayi>dizi[i])
		{
			i++;
		}
	}
	
	printf("dizinin yeni hali: ");
	for(i=0;i<6;i++)
	{
		printf("%d ",dizi[i]);
	}
	
	return 0;
}
