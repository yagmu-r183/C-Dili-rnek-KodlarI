#include <stdio.h>
#include <stdlib.h>

int toplam(int dizi[],int a)
{
	if(a==0){
		return 0;//dizi bossa
	}
	else {
		return toplam(dizi,a-1)+dizi[a-1];
	}
}


int main() 
{
	int n,dizi[100],i;
	printf("dizinin eleman sayisini gir:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("dizinin %d. elemanini gir:",i+1);
		scanf("%d\n ",&dizi[i]);
	}
	printf("sonuc:%d",toplam(dizi,n));
	
	return 0;
}


