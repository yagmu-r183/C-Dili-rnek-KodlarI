#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char yazi[]="tura";
	char *p=yazi;
	printf("%s",yazi);//yazi yerine p de olur
	return 0;
}

/*int main()
{
	char yazi[]="tura";
	printf("%d",strlen(yazi));
}*/

/*int mystrlen(char *p)
{
	int uzunluk=0;
	int i=0;
	for(;p[i]!='\0';i++)
	{
		uzunluk++;
	}
	return uzunluk;
}

int main()
{
	char yazi[]="tura";
	printf("%d",mystrlen(yazi));
}*/





