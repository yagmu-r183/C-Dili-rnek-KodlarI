#include <stdio.h>
#include <stdlib.h>



int main()
{
	FILE *belge;
	char karakter[50];
	belge=fopen("C:\\Users\\USER\\OneDrive\\Masaüstü\\belge4.txt","w");
	fgets(karakter,20,belge);
	belge=fopen("C:\\Users\\USER\\OneDrive\\Masaüstü\\belge4.txt","r");
	puts(karakter);
	fclose(belge);
	return 0;
}
