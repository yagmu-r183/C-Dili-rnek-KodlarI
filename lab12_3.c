#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
 	int i,j,uzunluk=0,sayac=0;
 	char sesli[5]={'a','e','i','o','u'},kelime[20];
 	printf("kelime girin:");
 	gets(kelime);
 	uzunluk=strlen(kelime);
 	for(i=0;i<uzunluk;i++)
 	{
 		for(j=0;j<5;j++)
 		{
 			if(kelime[i]==sesli[j])	
 			{
 				sayac++;	
			}
		}
	}
 	printf("sesli harf sayisi: %d",sayac);
 	
	return 0;
}


