#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct musteri{
	int hesap;
	char isim[20];
	char soyisim[20];
	double deposit;
};
	void sifirdan_az();
	void updaterecords();
	void max_deposit_bul();
	void transferrecords();
	
int main()
{
	int i,secim;
	struct musteri cust;
	FILE *file=fopen("musteri.dat","w");
	if(file==NULL)
	{
		printf("dosya olusmadi");
	}
	else
	{
		
		for(i=0;i<3;i++)
		{
			printf("%d. musterinin hesap no-ismini-soyisim-deposit girin:",i+1);
			fscanf(stdin,"%d%s%s%lf",&cust.hesap,cust.isim,cust.soyisim,&cust.deposit);
			fseek(file,(cust.hesap-1)*sizeof(struct musteri),SEEK_SET);
			fwrite(&cust,sizeof(struct musteri),1,file);
		}
	}
	printf("**MENU**\n");
	printf("1-sifirdan kucuk olanlar\n2-max deposit belirleme\n3-300 den buyukleri list.txt ye transfer\n4-yuzde 50 artirma\n");
	printf("secimini gir:");
	scanf("%d",&secim);
	switch(secim)
	{
		case 1:sifirdan_az();
		break;
		case 2:max_deposit_bul();
		break;
		case 3:transferrecords();
		break;
		case 4:updaterecords();
		break;
		default:printf("hatali giris");
	}
}
void sifirdan_az(FILE *file) 
{
    struct musteri cust;
    int sayac = 0;
	file=fopen("musteri.dat","r");
	if(file==NULL)
	{
		printf("dosya yok");
	}
	else
	{
	 while (!feof(file))
	{
		fread(&cust, sizeof (struct musteri), 1,file);
		if(cust.hesap!=0)
		{
			if (cust.deposit < 0) 
			{
        	    sayac++;
        	}	
		} 
    }
    printf("%d tane eksi bakiye var",sayac);	
	}
}

void max_deposit_bul(FILE *file)
{
	struct musteri cust;
	file=fopen("musteri.dat","r+");
	fseek(file,(cust.hesap-1)*sizeof(struct musteri),SEEK_SET);
	int max=3000;
	if(file==NULL)
	{
		printf("dosya acilmadi");
	}
	else
	{
		while(!feof(file))
		{
			fread(&cust,sizeof(struct musteri),1,file);
			if(cust.hesap!=0)
			{
				if(cust.deposit<max)
				{
					cust.deposit=max;
					fwrite(&cust,sizeof(struct musteri),1,file);
				}
			}
		}
		printf("max deposito olusturuldu");
	}
}

void transferrecords(FILE *file)
{
	FILE *buyuk;
	struct musteri cust;
	fseek(file,(cust.hesap-1)*sizeof(struct musteri),SEEK_SET);
	buyuk=fopen("list.txt","w");
	file=fopen("musteri.dat","r+");
	if(file==NULL)
	{
		printf("dosya acilmadi");
	}
	else if(buyuk==NULL)
	{
		printf("dosya olusmadi");
	}
	else
	{
		while(!feof(file))
		{
			fread(&cust,sizeof(struct musteri),1,file);
			if(cust.hesap!=0)	
			{
				if(cust.deposit>=300)
				{
					fwrite(&cust,sizeof(struct musteri),1,buyuk);
				
				}
			}	
		}
		printf("300 den buyuk olan hesaplar aktarildi");	
	}
}

void updaterecords(FILE *file)
{
	struct musteri cust;
	file=fopen("musteri.dat","r+");
	fseek(file,(cust.hesap-1)*sizeof(struct musteri),SEEK_SET);
	if(file==NULL)
	{
		printf("dosya acilmadi");
	}
	else
	{
		while(!feof(file))
		{
			fread(&cust,sizeof(struct musteri),1,file);
			if(cust.hesap!=0)
			{
				cust.deposit=cust.deposit*1.5;
				printf("deposito artirildi\n");
				if(cust.deposit>=300)
				{
					do
					{
						printf("musteri hesap no guncelle:");
						scanf("%d",&cust.hesap);
						printf("musteri ismini guncelle:");
						scanf("%s",cust.isim);
						printf("musteri soyismini guncelle:");
						scanf("%s",cust.soyisim);	
					}
					while(cust.deposit>=300);
				}
			}
		}
		printf("guncelleme gerceklesti");
	}
}
