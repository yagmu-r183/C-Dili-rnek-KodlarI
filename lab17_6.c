#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char harfm[3][3],*hptr;
	int sayim[3][3],*sptr,i,j,sifre[];
	printf("harf tablosunu doldur:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("harfm[%d][%d]=%c",i,j,harfm[i][j]);
			scanf("%c\n",&harfm[i][j]);
		}
	}
	printf("sayi sifrelemelerini doldur:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("sayim[%d][%d]=%d",i,j,sayim[i][j]);
			scanf("%d\n",&sayim[i][j]);
		}
	}
	hptr=harfm;
	sptr=sayim;
	printf("sifreyi griniz:");
	scanf("%d",&sifre)
	
	
	return 0;
}
