#include <stdio.h>
#include <stdlib.h>

char *gunismi(char *gundizisi[],int uzunluk,int hangigun)
{
	if (hangigun>=1 && hangigun <=7)
	{
		return gundizisi[hangigun-1];
	}
	else 
	{
		return NULL;
	}
}

int main() 
{
	char *gunler[7]={"pzrts","sali","crsmb","prsmb","cuma","cmrts"};
	char *p=gunismi(gunler,7,3);
	if(p==NULL)
	{
		printf("null");
	}
	else
	{
		printf("%s",p);
	}
	return 0;
}
