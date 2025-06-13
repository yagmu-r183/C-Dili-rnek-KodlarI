#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int dizi[10],islem,sayac=0,i;
	printf("sayi girin:");
	scanf("%d",&dizi[sayac]);
	int sayi=dizi[sayac];
	while(sayac<9 && sayi!=-1)
	{
		sayac++;
		printf("sayiyi girin:");
		scanf("%d",&dizi[sayac]);
		sayi=dizi[sayac];
	}
	for(i=0;i<=sayac;i++)
	{
		if(dizi[i]!=-1)
		{
			islem=dizi[i]*dizi[i];
			printf("\nislem sonucu:%d",islem);
		}
		
	}
		
}
	

