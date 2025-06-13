#include <stdio.h>
#include <stdlib.h>
void  fonk(char dizi[50])
{
	int i=0,kelimes;
	while (1)
	{
		if(dizi[i]=='\0')
		{
			break;
		}	
		else if(dizi[i]==' ')
		{
			kelimes++;
		}
		i++;
		
	}
	kelimes++;
	printf("kelime sayisi:%d",kelimes);
	
	return dizi;
	
}

int main() 
{
	int a[50];
	printf("cumle gir:");
	gets(a);
	fonk(a);
	return 0;
}
