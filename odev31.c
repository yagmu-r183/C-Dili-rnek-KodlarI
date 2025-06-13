#include <stdio.h>
#include <stdlib.h>

char* my_strcat(char a[],char b[])
{
	int i,k=0,uzunluka=0,uzunlukb=0,x;
	while(1)// a nin uzunlugu icin
    {
     	if(a[k]=='\0')
     	{
     	   break;	
		}
		k++;
		uzunluka++;
	}
	k=0;
	 while(1)
     {
     	if(b[k]=='\0')
     	{
     	   break;	
		}
		k++;
		uzunlukb++;
	 }
	x=uzunluka;
	for(i=0;i<uzunlukb;i++)
	{
		a[x]=b[i];
		x++;
	}
	return a;
}

int main() 
{
	char a[]="yagmur";
	char b[]="inci";
	printf("%s",my_strcat(a,b));
}
