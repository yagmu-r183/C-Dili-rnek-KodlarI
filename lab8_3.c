#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n;
	printf("bir sayi giriniz:");
	scanf("%d",&n);
	if (n%2==0)
	{
		printf("%d-sayisi cifttir",n);
	}
     else printf("%d-sayisi tektir",n);
	return 0;
}
