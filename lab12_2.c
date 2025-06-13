#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,uzunluk;
	char metin[20],a;
	printf("bir metin giriniz:");
	gets(metin);
	uzunluk=strlen(metin);
	for(i=0;i<uzunluk;i++)
	{
		for(j=i;j<uzunluk;j++)
		{
			if(metin[i]>metin[j])
			{
				a=metin[i];
				metin[i]=metin[j];
				metin[j]=a;
			}
		}	
	}
	printf("\nalfabetik siraya gore yazimi:");
	puts(metin);
	
}


	
