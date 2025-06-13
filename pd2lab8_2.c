#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
		int numara[30];
		char isim[15];
		char soyisim[15];
		int vizenot;
		int finalnot;
		};
		
int main() 
{
	
	struct student *ptr;
	struct student std[3];
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("%d. ogrencinin ismi:",i+1);
		scanf("%s",std[i].isim);
		printf("%d. ogrencinin soyismi:",i+1);
			scanf("%s",std[i].soyisim);
		printf("%d. ogrencinin numarasi:",i+1);
			scanf("%s",std[i].numara);
		printf("%d. ogrencinin vizenotu:",i+1);
		scanf("%d",&std[i].vizenot);
		printf("%d. ogrencinin finalnotu:",i+1);
		scanf("%d",&std[i].finalnot);
	}
	ptr=std;
	
	
	int ortalama[3];
	for(i=0;i<3;i++)
	{
		ortalama[i]=ptr[i].vizenot*40/100+ptr[i].finalnot*60/100;
		printf("%d. ogrencinin yil sonu ortalamasi:%d\n",i+1,ortalama[i]);
		
	}

	printf("\n\n");
	char *gecici,girilen[15];
	int bulundu=0;
	printf("isme gore arama yap:");
	scanf("%s",girilen);
	
	for(i=0;i<3;i++)
	{
		
				if(ptr[i].isim==girilen)
			{
				
				bulundu=1;	
				printf("%s", girilen);
				break;
			}
		
	}
	
	if(bulundu==1)
	{
		printf("%s\n%s\n%d\n%d\n%d",ptr[i].isim,ptr[i].soyisim,ptr[i].numara,ptr[i].vizenot,ptr[i].finalnot);
	}
	else
	{
		printf("hatali giris");
	}
	
	
	
	
	return 0;
}
