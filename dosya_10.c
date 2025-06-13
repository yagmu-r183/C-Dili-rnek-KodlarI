#include <stdio.h>
#include <stdlib.h>


int main() 
{
	FILE *filep;
	char text[20];
	filep=fopen("C:\\Users\\USER\\OneDrive\\Masaüstü\\belge10.txt","a");
	if(filep==NULL)
	{
		printf("dosya olusamadi");
	}
	else
	{
		printf("bir sey yazin:");
		fgets(text,20,stdin);
		fputs(text,filep);
		printf("dosyaya yazildi");
		fclose(filep);
	}
	return 0;
	
}
