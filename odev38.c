#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void islem(char a[30])
{
	int i,say=0,b=0,uzunluk;
	uzunluk=strlen(a);
	for(i=0;i<uzunluk;i++)
	{
		if(a[i]=='e')
		{
			say++;
		}
	    if(a[i]==' ')
		{
			b++;
			printf("%d.kelimede %d tane 'e' var\n",b,say);
			say=0;
		}
		
	}
	
}
int main()
{
	char kelime[30];
	printf("cumle gir:");
	gets(kelime);
	islem(kelime);
}
