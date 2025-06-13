#include <stdio.h>
#include <stdlib.h>

int kontrol(int sayi)
{
	int tek,cift;
	if(sayi%2==0)
	{
		printf(" sayi cifttir");
	}
	else
	{
		printf("sayi tektir");
	}
	return sayi;
}
int main() 
{
	int a;
	printf("bir sayi giriniz:");
	scanf("%d",&a);
	kontrol(a);
	return 0;
}
