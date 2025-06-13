#include <stdio.h>
int main()
{
	int ogrencino,vize,final;
	float ort;
	printf("ogrenci no girin:\n");
	scanf("%d",&ogrencino);
	printf("vize notu giriniz:\n");
	scanf("%d",&vize);
	printf("final notunu giriniz:\n");
	scanf("%d",&final);
	//printf("ogrenci no:\nvizo notu:\nfinal notu:\n)   scanf("%d%d%d",&ogrencino,&vize,&final);
	ort=vize*0.4+final*0.6;
	printf("ogrenci no:%d\nortalamasi:%.2f",ogrencino,ort);
	
	return 0;
	
}
