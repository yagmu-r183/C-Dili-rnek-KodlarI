#include <stdio.h>
#include <stdlib.h>

/* dosya yazdirm yerlestirme icin putc */

int main()
{
	FILE *dosya;
	dosya=fopen("C:\\Users\\USER\\OneDrive\\Masaüstü\\bilgi.txt","w");
	putc('yagmur',dosya);
	putc('\n',dosya);
	putc('inci',dosya);
	putc('\n',dosya);
	putc('van',dosya); 
	fclose(dosya);
	return 0;
}
