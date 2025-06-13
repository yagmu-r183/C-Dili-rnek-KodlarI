#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int sayi,faktoryel=1,k;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	k=sayi;
	while(sayi>0)
	{
		faktoryel*=sayi;
		sayi--;
	}
	printf("%d sayisinin faktoriyeli:%d",k,faktoryel);
	return 0;
}
