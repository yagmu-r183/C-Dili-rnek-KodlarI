#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int sicaklik;
	printf("bir sicaklik degeri giriniz:");
	scanf("%d",&sicaklik);
	if(sicaklik==0)
	{
		printf("%d-sicaklik donma noktasinda",sicaklik);
	}
	else if(sicaklik<0)
	{
		printf("%d-sicaklik donma noktasinin altinda",sicaklik);
	}
	else
	{
		printf("%d-sicaklik donma noktasinin ustunde",sicaklik);
	}
	return 0;
}
