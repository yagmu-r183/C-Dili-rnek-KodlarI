#include <stdio.h>
#include <stdlib.h>


int main() 
{
	FILE *filep;
	filep=fopen("C:\\Users\\USER\\OneDrive\\Masaüstü\\belge8.txt","r");
	
	if(filep == NULL)
	{
		printf("oyle bir dosya yok");
	}
	else
	{
		printf("dosya var");
	}
	fclose(filep);
	return 0;
}
