#include <stdio.h>
#include <stdlib.h>


int main() 
{
	FILE *filep;
	filep=fopen("C:\\Users\\USER\\OneDrive\\Masa�st�\\belge7.txt","w");
	
	if(filep == NULL)
	{
		printf("dosya olusturulamadi");
	}
	else
	{
		printf("dosya olusturuldu");
	}
	fclose(filep);
	return 0;
}
