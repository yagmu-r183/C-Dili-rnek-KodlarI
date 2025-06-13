#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int ders[20],i,toplam=0,enb,enk;float ort;
	for(i=0;i<20;i++)
	{
		printf("%d.ogrencinin notunu giriniz:",i+1);
		scanf("%d",&ders[i]);
		toplam=toplam+ders[i];
	}
	enb=ders[0];enk=ders[0];
	for(i=0;i<20;i++)
	{
		if(ders[i]>enb) enb=ders[i];
	    if(ders[i]<enk) enk=ders[i];
	}
	ort=toplam/20.0;
	printf("sinifin ortalamasi: %.3f\n",ort);
	printf("en dusuk not: %d\n",enk);
	printf("en yuksek not: %d\n",enb);
}
