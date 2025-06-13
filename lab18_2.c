#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int n,enb,i;
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	int *ptr=(int *) malloc(n*sizeof(int));
	printf("dizinin elemanlarini gir:");
	enb=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)>=enb)
		{
			enb=*(ptr+i);
		}
	}
	printf("en buyuk sayi:%d",enb);
	return 0;
}
