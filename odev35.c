#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char dizi1[20],dizi2[20];
	printf("1. diziyi girin:");
	gets(dizi1);
	printf("2. diziyi girin:");
	gets(dizi2);
	printf(" %s",strcat(dizi1,dizi2));
}

