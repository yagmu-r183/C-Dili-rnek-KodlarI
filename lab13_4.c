#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int asal(int sayi)
{
	int i;
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			printf("asal degildir\n");
			return 0;
		}
	}
	printf("asaldir\n");
	return asal;
}

int amstrong(int sayi)
{
	int kalan,islem;
	int i,sayac;
	while(sayi>0)
	{
		sayi=sayi/10;
		sayac++;
	}
	for(i=1;i<=sayac;i++)
	{
		while(sayi>0)
		{
			kalan=sayi%10;
			sayi=sayi/10;	
			islem+=pow(kalan,sayac);
		}
	}
	if(islem==sayi)
	{
		printf("amstrong sayidir");
	}
	else
	{
		printf("amstrong degildir");
	}
	return amstrong;
}


int main() 
{
	int a;
	printf("sayiyi gir:");
	scanf("%d",&a);
	asal(a);
	amstrong(a);
	
	return 0;
}
