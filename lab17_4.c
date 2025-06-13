#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,n,*p,gecici,*p2;
	printf("dizinin eleman sayisini gir:");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++)
	{
		printf("dizinin %d. elemani:",i+1);
		scanf("%d",&dizi[i]);
	}
	for(p=dizi,p2=dizi+n-1;p<p2;p++,p2--)
	{
		gecici=*p;
		*p=*p2;
		*p2=gecici;
	}
	printf("dizinin tersi:\n");
	for(p=dizi;p<dizi+n;p++)
	{
		printf("%d\t",*p);
	}
	return 0;
}
