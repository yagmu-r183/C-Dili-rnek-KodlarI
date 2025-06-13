#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strcpy ve strncpy yazma

int main() 
{
	/*char a[]="yagmur";
	char b[]="inci";
	strcpy(a,b);//b yi a ya kopyalar
	printf("a=%s\nb=%s\n",a,b);
	//cikti:a=inci b=inci*/
	
	char a[]="yagmur";
	char b[]="inci";
	strncpy(a,b,3);/*b yi a ya kopyalar ama il uc elemani 
	 tek ilk uce aktarir gerisi ayni ve strncpy yazdigima dikkat et*/
	printf("a=%s\nb=%s\n",a,b);  
	return 0;
}
