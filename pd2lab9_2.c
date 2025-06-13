#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float harmonik(int n)
{
	if(n==1)
	{
		return 1/(1+(n-1)*1);
	}
	else
	{
		return 1/(1+(n-1)*1)+harmonik(n-1);
	}
}

int main() 
{
	int n,i;
	printf("eleman sayisi gir:");
	scanf("%d",&n);
	float toplam=harmonik(n);
	printf("harmonik serinin ilk %d elemaninin toplami:%d",n,toplam);
	for(i=0;i<n;i++)
	{
		printf("%f\n",harmonik(i+1));
	}
	return 0;
}
