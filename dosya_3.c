#include <stdio.h>
#include <stdlib.h>

// dosyadan veri okuma

int main() 
{
	FILE *belge;
	char karakter;
	belge=fopen("C:\\Users\\USER\\OneDrive\\Masaüstü\\bilgi3.txt","w");
	fputc('ini',belge);
	fclose(belge);
	belge=fopen("C:\\Users\\USER\\OneDrive\\Masaüstü\\bilgi3.txt","r");
	do //dosyanin sonuna kadar gitmesi icin
	{
		karakter=getc(belge);
		printf("%c",karakter);
	}
	while(karakter!=EOF); //dosyanin sonuna kadar gitmesi icin
	
	fclose(belge);
	
	return 0;
}
