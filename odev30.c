#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strcat--> kes yapistir isini yapar(ekleme yapar)

int main() 
{
	char a[]="yagmur";
	char b[]="inci";
	strcat(a,b); // b yi a ya ekler 
	printf("%s",a);
	return 0;
}
