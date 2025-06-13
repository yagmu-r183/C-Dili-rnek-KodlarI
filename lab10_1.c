#include <stdio.h>
#include <stdlib.h>


int main() 
{
	float ort,toplam=0.0,dizi[8];
	int i;
	for(i=0;i<8;i++)
	{
		printf("%d.sayiyi giriniz:",i+1);
		scanf("%f",&dizi[i]);
		toplam+=dizi[i];
	}
	ort=toplam/8;
	printf("girilen sayilarin ortalamasi:%f",ort);
	
	return 0;
}
