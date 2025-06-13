#include <stdio.h>
#include <stdlib.h>

int ortanca(int n,int dizi[10],int i)
{
	int a=n-1;
	if(n==1)
	{
		return dizi[0];
	}
	else if(dizi[a]==dizi[i])
	{
		return dizi[i--];
	}
	else
	{
		return ortanca(n,dizi[--a],++i);
	}
	
	
}

int main() 
{
	int n,i;
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++)
	{
		printf("%d. elemani gir:",i+1);
		scanf("%d",&dizi[i]);
	}
	i==0;
	if(n%2==0)
	{
		printf("dizinin ortanca elemani yoktur");
	}
	else
	{
		printf("dizinin ortanca elemani:%d",ortanca(n,dizi,i));
	}
	
	return 0;
}
