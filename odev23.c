#include <stdio.h>
#include <stdlib.h>
// ***onemli soru tekrar baaakkk***
//**girilen ismi tersten yazma**
void terscevir(char dizi[])
{
	int i,uzunluk,gecici;
	uzunluk=strlen(dizi);
	for(i=0;i<uzunluk/2;i++)
	{
		gecici=dizi[i];
		dizi[i]=dizi[uzunluk-i-1];
		dizi[uzunluk-1-i]=gecici;
	}
}
int main() 
{
	char a[10];
	printf("bir yazi girin:");
	scanf("%s",a);
	terscevir(a);
	printf("tersi: %s",a);
	return 0;
}
