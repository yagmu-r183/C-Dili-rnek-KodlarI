#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main() 
{
	char unlu[5]={'a','e','i','u','o','A','E','I','O','U'};
	int rakam[10]={'0','1','2','3','4','5','6','7','8','9'},i,j,sayu=0,sayunsz=0,sayr=0,uzunluk=0,kelime[100],sayb=0;
	printf("kelime girin:");
	gets(kelime);
	uzunluk=strlen(kelime);
	for(i=0;i<uzunluk;i++)
	{
		for(j=0;j<5;j++)
		{
			if(kelime[i]==unlu[j])
			{
				sayu++;
			}
		}
		for(j=0;j<10;j++)
		{
			if(kelime[i]==rakam[j])
			{
				sayr++;
			}
		}
		if (kelime[i]==' ')
		{
			sayb++;
		}
	}
	sayunsz=uzunluk-(sayu+sayr+sayb);
	printf("kelimedeki unlu sayisi:%d\n",sayu);
	printf("kelimedeki unsuz sayisi:%d\n",sayunsz);
	printf("kelimedeki rakam sayisi:%d",sayr);
	return 0;
}
