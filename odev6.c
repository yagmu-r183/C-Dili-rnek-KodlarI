#include <stdio.h>
#include <stdlib.h>

//**birim donusturme**
int main() 
{
	int secim,a,b;
	printf("donusturme birimleri-->\n1-mm\n2-cm\n3-dm\n4-km\n");
	printf("uzunluk giriniz(m cinsinden):");
	scanf("%d",&a);
	printf("seciminiz:");
	scanf("%d",&secim);
	switch (secim)
	{
		case 1:{b=a*1000; break;}
		case 2:{b=a*100; break;}
		case 3:{b=a*10; break;}
		case 4:{b=a/1000;break;}
		defaulte: printf("hatali giris");
	}
	printf("sonuc:%d",b);
	
	return 0;
}
