#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* bir pointera degeer atamazsak bo bir yere hatta sisteme
girerr ve tehlike olusturur onlemek icin int *p=null ya da
*p=0 diyebiliriz*/

char *dondur(char *p,int indeks)
{
	int uzunluk=strlen(p);
	if(indeks>uzunluk)
	{
		return NULL;
	}
	else
	{
		return p+indeks;
	}
}
int main() 
{
	char dizi[]="yazilim";
	char *p=dondur(dizi,2);
	if(p==NULL)
	{
		printf("pointer null");
	}
	else
	{
		printf("%s",p);
	}
	return 0;
}
