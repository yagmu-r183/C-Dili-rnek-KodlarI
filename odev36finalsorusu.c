#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char a[20];	
	printf("lutfen birseyler girin:");
	gets(a);
	printf("%d\n",strlen(a));
	printf("%s",strrev(a));
	
	return 0;
}
