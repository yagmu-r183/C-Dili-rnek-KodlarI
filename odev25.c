#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*int my_strlen(char a[]) //string kutuphanesi kullanmadan bulma
{
	int k=0,uzunluk=0;
	while(1)
	{
		if(a[k]=='\0')
		{
			break;
		}
		uzunluk++;
		k++;
	}
	return uzunluk;
}
int main() 
{
	char a[]="yagmur inci";
	printf("%d",my_strlen(a))};*/
	
	
int main() //string kutuphanesi kullanarak
{
	char a[]="yagmur inci";
	printf("%d",strlen(a));
	
	return 0;
}




