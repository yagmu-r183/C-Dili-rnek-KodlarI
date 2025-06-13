#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student 
{
	char isim[15];
	int vize;
	int final;
	int no;
	struct student *next;
};
typedef struct student node;
node *head, *newnode,*enbasarili,*oncekinode;

void listeolustur();
void kayitekle();
void kayitguncelle();
void kayitsil();
void kayitlistele();
void numaraile();
void isimile();
void Enbasarili();
void exchange();
void listless();
void updateahmet();
void sinifortalamasi();
int main() 
{
	int secim=0;
	printf("**MENU**\n");
	printf("1-yeni kayit ekleme\n2-kayit guncelleme\n3-kayit silme\n4-kayit listeleme\n5-sinif ortalamasi hesaplama\n6-en yuksek basari notu yazdirma\n");

		printf("secim yap [1-6]:\n");
		scanf("%d\n",&secim);
	    switch(secim)
		{
			case 1:listeolustur();
			kayitekle();
			break;
			case 2:listeolustur();
			kayitguncelle();
			break;
			case 3:listeolustur();
			kayitsil();
			break;
			case 4:listeolustur();
			kayitlistele();
			break;
			case 5:listeolustur();
			sinifortalamasi();
			break;
			case 6:listeolustur();
			Enbasarili();
			break;
		}

	exchange();
	listless();
	updateahmet();
	return 0;
}


 /*void listeolustur()
{
	int i,n;
	printf("listede kac ogrenci olsun?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			newnode=(node*)malloc(sizeof(node));
			head=newnode;
		}
		else
		{
			newnode->next=(node*)malloc(sizeof(node));
			newnode=newnode->next;
		}	
		printf("%d. ogrenci ismi:",i+1); 
		scanf("%s",newnode->isim);
		printf("%d. ogrenci number:",i+1); 
		scanf("%d",&newnode->no);
		printf("%d. ogrenci vize notu:",i+1); 
		scanf("%d",&newnode->vize);
		printf("%d. ogrenci final notu:",i+1); 
		scanf("%d",&newnode->final);
	}
	newnode->next=NULL;
}*/

void listeolustur()
 {

     int n,i;
     printf("ogrenci sayisini giriniz:");
     scanf("%d",&n);
     for(i=0;i<n+1;i++)
     {
          if(i==0)
          {
           newnode=(node *)malloc(sizeof(node));
           head=newnode;
          }
          else
          {
          	newnode->next=(node *)malloc(sizeof(node));
            newnode=newnode->next;
          	printf("%d. ogrencinin adini giriniz:",i);
            scanf("%s",newnode->isim);
            printf("ogrencinin numarasini giriniz:");
            scanf("%d",&newnode->no);
            printf("ogrencinin vize puanini giriniz:");
            scanf("%d",&newnode->vize);
            printf("ogrencinin final puanini giriniz:");
            scanf("%d",&newnode->final);
          }
           
     }
     newnode->next=NULL;
 }

 void kayitekle()
{
	int kayitno;
	node *p,*q;
	p=head;
	newnode = (node*)malloc(sizeof(node));
	printf("hangi kayittan oncesine eklemek istiyorsun?\n");
	scanf("%d",&kayitno);
	printf("yeni ogrenci ismi gir:"); scanf("%s",newnode->isim);	
	printf("yeni ogrenci no gir:"); scanf("%d",&newnode->no);	
	printf("yeni ogrenci vize notu gir:"); scanf("%d",&newnode->vize); 
	printf("yeni ogrencinin final notunu gir:"); scanf("%d",&newnode->final);
	
	if(p->no==kayitno)// basa ekler
	{
		newnode->next=p;
		head=newnode;
	}
	else  
	{
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;
			if(p->no==kayitno) break;
		}
		if(p->no==kayitno)//araya ekler
		{
			q->next=newnode; //q->nex=newnode
			newnode->next=p;//newnode->nex=p
		}
		else if(p->next==NULL)//sona ekler
		{
			p->next=newnode; 
			newnode->next=NULL;		
		}
	}
	printf("yeni kayit eklenmistir");
}

void kayitguncelle()
{
	int kayitno,islem;
	node *p;
	printf("guncellemesi yapilacak ogrenci numarasini gir:");
	scanf("%d",&kayitno);
	p=head;
	while(p->next!=NULL)
	{
		if(p->no==kayitno)
		{
			printf("ogrenci bulundu\n");
			printf("ogrenci ismi guncelle:");
			scanf("%s",p->isim);
			printf("ogrencinin vize notunu guncelle:");
			scanf("%d",&p->vize);
	        printf("ogrencinin final notunu guncelle:");
	        scanf("%d",&p->final);
	        printf("**guncelleme tamamlandi**\n");
		}
		p=p->next;
	}
/*	if(p->next!=kayitno)
	{
		printf("ogrenci yok");
	}*/
}

void kayitsil()
{
	int kayitno;
	node *p,*q;
	printf("silmek istedigin ogrenci no gir:");
	scanf("%d",&kayitno);
	p=head;
	if(p->no==kayitno)//bastakini siler
	{
		head=p->next;
		free(p);
		printf("silme islemi tamamlandi\n");
	}
	else
	{
		p=p->next;
		while(p!=NULL)
		{
			if(p->no==kayitno) break;
			
			else
			{
				q=p;
				p=p->next;
			}
		}
		if(p->no==kayitno) //aradan ve sondan silme
		{
			q->next=p->next;
			free(p);
			printf("silme islemi tamamlandi\n");
		}
		else if(p->next==NULL)
		{
			printf("silinecek ogrenci no yok \n");
		}
	}
}
void kayitlistele()
{
	float ort=0;
	int secim;
	node *p;
	p=head;
	while(p->next!=NULL)
	{
		ort=(float)p->vize*0.4+(float)p->final*0.6;
		if(ort>=60)
		{
			printf("ogrenci adi:%s\nogrenci no:%d\nogrenci ortalamasi:%.2f\n",p->isim,p->no,ort);
		}
		else
		{
			p=p->next;
		}
		
	}
	printf("*Menu*\n");
    printf("1-numaraya gore arama\n2-isme gore arama\n");
    printf("Secimiz:");
    scanf("%d",&secim);
    switch(secim)
    {
        case 1:
        numaraile();
        break;
      case 2:
        isimile();
        break;
     }
}

void numaraile()
{
    node *p;
    int s;
    p=head;
    printf("lutfen listelemek icin aranacak ogrencinin numarsini giriniz:");
    scanf("%d",&s);
    while(p!= NULL)
    {
    	if(p->no==s)
    	{
    		printf("ogrencinin ismi:%s\n",p->isim);
            printf("ogrencinin vize puani:%d\n",p->vize);
            printf("ogrencinin final puani:%d\n",p->final);
        }
        p=p->next;
    }
}

void isimile()
{
	char isim[20];
    node *p;
    p=head;
    printf("lutfen isim ile listelenecek ogrencinin ismini giriniz:");
    scanf("%s",isim);
    while(p!=NULL)
    {
        if(p->isim==isim)
        {
            printf("ogrencinin numarasi:%d\n",p->no);
            printf("ogrencinin vize puani:%d\n",p->vize);
            printf("ogrencinin final puani:%d\n",p->final);         }
        p=p->next;
    }
}


float basarihesap(int vize,int final)
{
	return (0.4*vize)+(0.6*final);
}

void Enbasarili()
{
	double basarinotu=0;
	node *p;
	p=head;
	enbasarili=head;
	
	while(p->next!=NULL)
	{
		p=p->next;
		if(basarihesap(p->vize,p->final)>basarihesap(enbasarili->vize,enbasarili->final))
		{
			enbasarili=p;
		}
	}
	printf("en basarili ogrenci:\n");
	printf("No:%d  -Ad:%s   basari notu:%.2f\n",enbasarili->no,enbasarili->isim,basarihesap(enbasarili->vize,enbasarili->final));
}

void exchange()
{
	node *p,*q,*gecici,*k;
	p=head;
	if(k->next!=NULL)
	{
		q->next=k;
		k->next=q;
	}
	k=k->next;
	p=gecici;
	gecici=q;
	q=p;
}

void listless()
{
	node *p;
	p=head;
	float ort;
	do
	{
		ort=0;
		ort=(float)p->vize*0.4+(float)p->final*0.6;
		if(ort<60)
		{
			free(p);
		}
	}
	while(p->next!=NULL);
}

void updateahmet()
{
	node *p;
	do
	{
		if(p->isim=="ahmet")
		{
			strcpy(p->isim,"AHMET");
		}
	}
	while(p->next!=NULL);
}

void sinifortalamasi()
{
	float ort, top=0;
	int sayac=0;
	node *p;
	p=head;
	if(p==NULL)
	{
		printf("listede kayit yok!"); 
	}
	else
	{
		while(p!=NULL);
		{
			top+=basarihesap(p->vize,p->final);
			p=p->next;
			sayac++;
		}
		ort=top/sayac;
		printf("sinif ortalamasi:%.2f\n",ort);
	}
}
