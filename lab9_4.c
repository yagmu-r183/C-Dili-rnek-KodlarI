#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,sayi,tersi,kalan,k;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	tersi=0;
	kalan=0;
	k=sayi;
	while(sayi>0)
	{
	   kalan=sayi%10;
	   tersi=tersi+kalan;
	   tersi=tersi*10;
	   sayi=sayi/10;
	}
	tersi=tersi/10;
    if(tersi==k)
    {
    	printf("%d polindromdur",k);
	}
	else
		printf("%d polindrom degildir",k);   
	
	return 0;
}
