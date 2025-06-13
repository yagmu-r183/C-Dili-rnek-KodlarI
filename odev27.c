#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strcmp kullanimi
int main() 
{
	char a[]="yagmur inci";
	char b[]="yagmur nci"; // ayni olunca 0 farkli olnunca
	int k=strcmp(a,b);  // 0 dan farkli donduruyor                    
	printf(" %d",k);

}
