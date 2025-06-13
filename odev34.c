#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char a[20]="yagmur inci C calisiyor";
	char b[10];
	while(1)
	{
		printf("\n");
		gets(b); //alir puts isse yazdirir
		if(strstr(a,b))
		{
			printf("aradiginiz kelime bulunmaktadir");
		}
		else
		{
			printf("aradiginiz kelime bulunmamaktadir");
		}
}
        return 0;
}

