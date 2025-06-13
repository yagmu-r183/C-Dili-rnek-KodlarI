#include <stdio.h>
#include <stdlib.h>

int carpma(n,a){
	if(a==0||n==0){
		return 0;
	}
	else if(n<0&&a<0)
	{
		if(a<0)
		{
			return -n+carpma(n,a+1);//n<0 ve a>0 olunca ve ikisi de - olunca
		}
	}
		
	else
	{
		return n+carpma(n,a-1);//ikisi de + ise
	
	}
}

int main() 
{
	int n,a;
	printf("iki sayi giriniz:");
	scanf("%d%d",&n,&a);
	printf("%d * %d = %d",n,a,carpma(n,a));
	return 0;
}
