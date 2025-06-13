#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int n,faktoryel,i;
	printf("n sayisi girin:");
	scanf("%d",&n);
	faktoryel=1;
	for(i=1;i<=n;i++)
	{
		faktoryel=faktoryel*i;
	}
	printf("n sayisinin faktoryeli:%d",faktoryel);
	return 0;
}
