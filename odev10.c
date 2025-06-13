#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int sayi,i,toplam=0,x;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++)
	{
		x=sayi%i;
		if(x==0)
		{
			toplam+=i;
		}
	}
	if(toplam==sayi)
	{
		printf("%d sayisi mukemmel sayidir",sayi);
	}
	else
	{
		printf("%d sayisi mukemmel sayi degildir",sayi);
	}	
	
	return 0;
}
