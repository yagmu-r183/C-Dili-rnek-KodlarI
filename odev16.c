#include <stdio.h>
#include <stdlib.h>

void hatayibas(int hata1,int hata2)
{
	printf("hata kodu: %d",hata1);
}

int main() 
{
	int sayi;
	printf("bir pozitif sayi girin:");
	scanf("%d",&sayi);
	if(sayi<0)
	{
		hatayibas(404,401);
	}
	else
	{
		printf("tebrikler");
	}
	
	return 0;
}
