#include <stdio.h>
#include <stdlib.h>

int enbyk(int n,int dizi[])
{
	if(n==1) return dizi[0];
	else
	{
		int max=enbyk(n-1,dizi);
		return (max>dizi[n-1])? max:dizi[n-1];
	}
}

int main() 
{
	int n,dizi[n],i;
	printf("dizinin eleman sayisini gir:");
	scanf("%d",&n);
	printf("dizinin elemanlarini gir:");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&dizi[i]);
	}
	printf("dizinin en buyuk elemani:%d",enbyk(n,dizi));
	
	return 0;
}
