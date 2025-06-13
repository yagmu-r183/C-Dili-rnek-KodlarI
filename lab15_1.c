#include <stdio.h>
#include <stdlib.h>
void siralama(int dizi[],int x)
{
	int i,gecici;
	if(x>0)
	{
		for(i=0;i<x;i++)
		{
			if(dizi[i]>dizi[i+1])
			{
				gecici=dizi[i+1];
				dizi[i+1]=dizi[i];
				dizi[i]=gecici;
			}
		}
		siralama(dizi,x-1);
	}
}

int main() 
{
	int n,i;
	printf("dizinin eleman sayisi:");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++)
	{
		printf("dizinin %d. elemani giriniz:",i);
		scanf("%d",&dizi[i]);
	}
	siralama(dizi,n-1);
	for(i=0;i<n;i++)
	{
		printf("%3d\n",dizi[i]);
	}
	if(n%2==1)
	{
		printf("dizinin ortanca elemani:%d",dizi[n/2]);
	}
	else{
		printf("dizinin ortanca elemani yoktur");
	}
	return 0;
}
