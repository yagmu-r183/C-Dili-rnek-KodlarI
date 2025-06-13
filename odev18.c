#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{
	int fact=1,i;
	for(i=sayi;i>0;i--)
	{
		fact*=i;
	}
	return fact;
}

int main() 
{
	int n;
	printf("faktoryelini almak istediginiz bir sayi giriniz:");
	scanf("%d",&n);	
    printf("sonuc:%d",faktoriyel(n));
}
