#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int polindrom(char metin[30],int j,int i)
{
	if(i==j)
	{
		return 1;
	}
	
	else if(metin[i]==metin[j])
	{
	    return	polindrom(metin,--j,++i);
	    
	}
	else
	{
		return 0;
	}	
	
}

int main() 
{
	int i=0,lenght,sonuc;
	char metin[30];
	printf("metni gir:");
	gets(metin);
	lenght=strlen(metin);
	sonuc=polindrom(metin,lenght-1,i);
	if(sonuc==0)
	{
		printf("metin palindrom degildir");
	}
    else if(sonuc==1)
	{
		printf("metin palindromdur");
	}
	return 0;
}
