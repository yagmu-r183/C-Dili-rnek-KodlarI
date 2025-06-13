#include <stdio.h>
#include <stdlib.h>

int asalbul(n,i)
{
	if(n<2){
		return 0;
	}
	if(i==1){
		return 1;//sayinin yarisinin bire esit olmasi sadce asallarda gecerli bir seydir
	}
	if(n%i==0){
		return 0;
	}
	return asalbul(n,i-1);
}

int main() 
{
	int n,sonuc,i;
	printf("bir sayi giriniz:");
	scanf("%d",&n); 
	for (i=2;i<=n;i++)
	{
		sonuc=asalbul(i,i/2);
		if(sonuc==1)
		{
			printf("%4d",i);
		}
	}
	return 0;
}
