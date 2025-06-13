#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i=5;
	int *p=&i;
	printf("%u\n",p);
	printf("%d",*p);
	return 0;
	
/*	int a=5,*ap;
	float b=3.2,*bp;
	double c=3.412,*cp;
	char d='a',*dp;
	int sayilar[4]={1,2,3,4},*arrayp;
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	arrayp=&sayilar[1];
	printf("%u adresindeki intin degeri %d dir.\n",ap,*ap);
	printf("%u adresindeki floatin degeri %f dir.\n",bp,*bp);
	printf("%u adresindeki doubletin degeri %lf dir.\n",cp,*cp);
	printf("%u adresindeki charin degeri %c dir.\n",dp,*dp);
	printf("%u adresindeki sayilarin elemaninin degeri %d dir.\n",arrayp,*arrayp);*/
	
}
