#include <stdio.h>
#include <stdlib.h>

//tam sayi mi?**
int main() 
{
	float sayi;
	printf("bir sayi girin:");
	scanf("%f",&sayi);
	if(sayi==(int)sayi)
	{
		printf("sayi tamsayidir");
	}
	else
	{
		printf("sayi tam sayi degildir");
	}
	return 0;
}
