#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char veri[25]="yazilim muh.";
	int i,uzunluk=strlen(veri);
	FILE *filep=fopen("C:\\Users\\USER\\OneDrive\\Masaüstü\\belge9.txt","w");
	if(filep==NULL)
	{
		printf("dosya olusamadi");
	}
	else
	{
		for(i=0;i<uzunluk;i++)
		{
			fputc(veri[i],filep);
			printf("yazilan karakter %c\n",veri[i]);
		}
		
	}
	printf("dosya olusturuldu");
	fclose(filep);
	
	
	return 0;
}
