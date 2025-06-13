#include <stdio.h>
#include <stdlib.h>

/*  \\unutmaa
	dosya olusturma*/

int main() 
{
	FILE *dosya;
	dosya=fopen("C:\\Users\\USER\\OneDrive\\Masaüstü\\yagmurinci.txt","w");
	fclose(dosya);
	return 0;
}
