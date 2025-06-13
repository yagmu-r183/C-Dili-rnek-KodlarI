#include<stdio.h>
int main()
{
	int sayi1,sayi2,temp;
	printf("iki sayi girin:\n");
	scanf("%d%d",&sayi1,&sayi2);
	temp=sayi1;
	sayi1=sayi2;
	sayi2=temp;
	printf("sayi1=%d,sayi2=%d",sayi1,sayi2);
}
