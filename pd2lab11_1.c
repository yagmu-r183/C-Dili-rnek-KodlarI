#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ogrenci  bilgilerini saklamak icin bir yapi tanimlamasi
struct ogrenci{
	char isim[20];
	int numara;
	int vize;
	int final;
};
//degiskenler olusturuldu
void dosya_olustur();
void  dosyadan_oku();
void altmis_ustu();
void  kalan_gecen();
void dosya_boyutu();

int main ()
{
	int secim;
	//ilk basta bir veri okumasi icin dongu 
		printf("**Menu**\n");
		printf("1-dosya olustur:\n");
		printf("2-dosyadan oku/listele\n");
		printf("3-gecme notu 60 ustu olanlari listele\n");
		printf("4-dosyadan gecme notu 60 ustu olanlari 'gecenler.txt',alti olanlari'kalanlar.txt'dosyasina yazdir\n");
		printf("5-dosya boyutunu ekrana yazdir\n");
		printf("0-cikis\n");
		printf("seciminizi yapiniz:");
	    scanf("%d",&secim);
		switch (secim)
		{
			case 1:dosya_olustur();break;
			case 2:dosya_olustur();dosyadan_oku();break;
			case 3:dosya_olustur();altmis_ustu();break;
			case 4:dosya_olustur();kalan_gecen();break;
			case 5:dosya_olustur();dosya_boyutu();break;
			case 0:exit(0);
			default: printf("hatali giris");
		}
	//her secime ozel durumlar 
}

void dosya_olustur()
{
	FILE *dosya;
	dosya=fopen("notlar.txt","w");
	int i,n;
	struct ogrenci ogrenci;
	printf("ogrenci sayisi giriniz:");
	scanf("%d",&n);
	if(dosya==NULL)
	{
		printf("dosya olusturulamadi");
		return ;
	}
	else
	{
		
		for(i=0;i<n;i++)
		{
			printf("%d. ogrenci ismi:",i+1); scanf("%s",ogrenci.isim);
			printf("%d. ogrenci numara:",i+1); scanf("%d",&ogrenci.numara);
			printf("%d. ogrenci vize notu:",i+1); scanf("%d",&ogrenci.vize);
			printf("%d. ogrenci final notu:",i+1); scanf("%d",&ogrenci.final);
			fprintf(dosya,"%s\t%d\t%d\t%d\n",ogrenci.isim,ogrenci.numara,ogrenci.vize,ogrenci.final);
		}
		printf("veriler dosyaya yazildi\n\n");	
	}
	fclose(dosya);
}
	
//dosyadan okuma yapmak icin
void dosyadan_oku()
{
	FILE *dosya=fopen("notlar.txt","r");
	struct ogrenci ogrenci;
	if(dosya==NULL)
	{
		printf("dosya acilmadi");return;
	}
	printf("isim  numara  vize  final\n");
	while(fscanf(dosya,"%s %d %d %d\n",ogrenci.isim,&ogrenci.numara,&ogrenci.vize,&ogrenci.final)!=EOF)
	{
		printf("%s\t%d\t%d\t%d\n",ogrenci.isim,ogrenci.numara,ogrenci.vize,ogrenci.final);
	}
		
	fclose(dosya);	
}
void altmis_ustu()
{
	FILE *dosya=fopen("notlar.txt","r");
	struct ogrenci ogrenci;
	if(dosya==NULL)
	{
		printf("dosya acilmadi");return;
	}
	else
	{
		printf("isim  numara  vize  final\n");
		while(fscanf(dosya,"%s%d%d%d",ogrenci.isim,&ogrenci.numara,&ogrenci.vize,&ogrenci.final)!=EOF)
		{
			float ort=ogrenci.vize*0.4+ogrenci.final*0.6;
			if(ort>=60)
			{
				printf("%s\t%d\t%d\t%d\n",ogrenci.isim,ogrenci.numara,ogrenci.vize,ogrenci.final);
			}
		}
	}
	fclose(dosya);
}
	
void kalan_gecen()
{
	FILE *dosya=fopen("notlar.txt","r");
	struct ogrenci ogrenci;
	int i,ort;
	if(dosya==NULL)
	{
		printf("dosya acilmadi");return;
	}
	else
	{
		FILE *kalanlar=fopen("kalanlar.txt","w");
		FILE *gecenler=fopen("gecenler.txt","w");
		if(kalanlar==NULL||gecenler==NULL)
		{
			printf("kalanlar,gecenler dosyalari olusturulamadi");
			fclose(dosya);return;
		}
		else
		{
			while(fscanf(dosya,"%s%d%d%d",ogrenci.isim,&ogrenci.numara,&ogrenci.vize,&ogrenci.final)!=EOF)
			{
				float ort=ogrenci.vize*0.4+ogrenci.final*0.6;
				if(ort>=60)
				{
					fprintf(gecenler,"%s\t%d\t%d\t%d\n",ogrenci.isim,ogrenci.numara,ogrenci.vize,ogrenci.final);
				}	
				else	
				{
					fprintf(kalanlar,"%s\t%d\t%d\t%d\n",ogrenci.isim,ogrenci.numara,ogrenci.vize,ogrenci.final);	
				}	
			}
			fclose(dosya);
			fclose(kalanlar);
			fclose(gecenler);	
			printf("ogrenciler basari durumlarina gore ayrildi\n");
		}	
	}
}

void dosya_boyutu()
{
	struct ogrenci ogrenci;
	FILE *dosya=fopen("notlar.txt","r");
	if(dosya==NULL)
	{
		printf("dosya acilmadi\n");return;
	}
	else
	{
		fseek(dosya,0,SEEK_END);
		long boyut = ftell(dosya);
		fclose(dosya);	      
	}
	printf("dosya boyutu: %ld byte\n");
}
