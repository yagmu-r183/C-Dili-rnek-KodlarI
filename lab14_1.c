#include <stdio.h>
#include <stdlib.h>

int obeb(int a,int b)
{
	if(b==0) 
	{
		return a;
	}
	else
	{
		return obeb(b,a%b);
	} 
}

int main() 
{
	int sayi1,sayi2;
	printf("iki sayi girin:");
	scanf("%d %d",&sayi1,&sayi2);
	int sonuc= obeb(sayi1,sayi2);
	printf("iki sayinin obebi : %d\n",sonuc);
	return 0;
}
