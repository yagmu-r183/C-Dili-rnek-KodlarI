#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a,b,c;
	printf("a sayisini giriniz:");
	scanf("%d",&a);
	printf("b sayisini giriniz:");
	scanf("%d",&b);
	printf("c sayisini giriniz:");
	scanf("%d",&c);
	if(a>=b&&a>c)
	{
		printf("en buyuk sayi a dir");	
	}
	else if(b>=c&&b>a)
	{
		printf("en buyuk sayi b");
	}
	else if(c>=a&&c>b)
	{
    	printf("en buyuk sayi c");
	}

	
	return 0;
}
