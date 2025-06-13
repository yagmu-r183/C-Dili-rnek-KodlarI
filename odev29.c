#include <stdio.h>
#include <stdlib.h>
//strcpy yi kendimiz olusruracaz

char* my_strcpy(char a[],char b[])
{

     int i=0,k=0,uzunluk=0;
     while(1)
     {
     	if(a[k]=='\0')
     	{
     	   break;	
		}
		k++;
		uzunluk++;
	 }
     for(;i<uzunluk;i++)
     {
     	a[i]=b[i];
	 }
	 return a;
}

int main() 
{
	char a[]="yagmur";
	char b[]="inci";
	my_strcpy(a,b);
	printf("%s",a);
	return 0;
}
