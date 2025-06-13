#include <stdio.h>
#include <stdlib.h>


int main() 
{
	FILE *metinbelgesi;
	char veri1[10]="Yazilim";
	char veri2[15]=" Muhendisligi";
	char veri3[10]=" Bolumu";
	metinbelgesi=fopen("C:\\Users\\USER\\OneDrive\\Masaüstü\\belge5.txt","w");
	fputs(veri1,metinbelgesi);
	fputs(veri2,metinbelgesi);
	fputs(veri3,metinbelgesi);
	fclose(metinbelgesi);
	return 0;
}
