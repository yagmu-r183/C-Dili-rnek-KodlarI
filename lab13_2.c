#include <stdio.h>
#include <stdlib.h>

int ort(int dizi[5])
{
	int	ort=0,i,toplam=0;
	for(i=0;i<5;i++)
	{
		toplam+=dizi[i];
	}
	ort=toplam/5;
	
	return ort;
}
int main()
{
	int b[5],i;
	for(i=0;i<5;i++)
	{
		printf("dizinin %d. elemanini gir:",i+1);
		scanf("%d",&b[i]);
	}
	printf("ortalama:%d",ort(b));
	
	return 0;
}
