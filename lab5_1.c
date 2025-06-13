#include <stdio.h>
#include <stdlib.h>

int ortanca_bul(int n,int dizi[n]){
	if (n==1) return dizi[0];
	int a;
	if (dizi[n]<dizi[n-1]){
		dizi[n-1]=a;
		dizi[n-1]=dizi[n];
		dizi[n]=a; 
	}
	return ortancabul(n,dizi[n-1]);
	
}

int main() 
{
	int n,i,dizi[5];
	printf("dizinin eleman sayisini giriniz");
	scanf("%d",&n);
	printf("dizinin elemanlarini giriniz:");
	for(i=0;i<n;i++){
		printf("%d ",dizi[i]);
		scanf("%d",&i);
	}
	printf("ortanca sayi: %d",ortanca_bul(n,dizi[n-1]));
	
	return 0;
}
