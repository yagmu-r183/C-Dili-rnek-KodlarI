#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char *vp;
	char ilk=67,*kelime="programlama";
	int j=32;
	vp=&ilk;
	printf("%c",*vp);
	vp=&j;
	printf("%c",*vp);
	vp=kelime;
	printf("%s",vp);
	return 0;
}
