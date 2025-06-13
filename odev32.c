#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// strncat-->belirli elemanlari ekler

int main() 
{
	char a[]="yagmur";
	char b[]="inci";
	strncat(a,b,3); // b yi a ya ilk uc elemanini ekler 
	printf("%s",a); 
	return 0;

}
