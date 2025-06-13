#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,dizi[5],sayi,sayac=0,k;
	printf("bir sayi girin:");
	scanf("%d",&sayi);
	k=sayi;
	
	while(sayi>0)
	{
		sayi=sayi/10;
		sayac++;
	}
	if(sayac>5)
	{
		printf("hatali giris tekrar dene");
	}
	else
	{
		for(i=0;i<sayac;i++)
		{
			dizi[i]=k%10;
			k=k/10;
			printf("\ndizi[%d]=%d",i,dizi[i]);
		}
	}
	
	
	
	return 0;
}
