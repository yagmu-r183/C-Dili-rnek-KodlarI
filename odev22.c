#include <stdio.h>
#include <stdlib.h>

//null karakter**
//#include <string.h>  --> strlen(isim) de uzunluk bulur
int uzunlukdon(char name[])
{
	int uzunluk=0,i;
	for(i=0;name[i]!='\0';i++)
	{
		uzunluk++;	
	}
	return uzunluk;
}
int main() 
{
	char isim[]="yagmur";
	printf("%d",uzunlukdon(isim));
	return 0;
}
