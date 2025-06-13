#include <stdio.h>
#include <stdlib.h>

int topla(int sayi1,int sayi2)
{
	return (sayi1+sayi2);
}

int main() 
{
	int say1,say2;
	printf("iki sayi girin:");
	scanf("%d%d",&say1,&say2);
	printf("sonuc:%d",topla(say1,say2));
}

