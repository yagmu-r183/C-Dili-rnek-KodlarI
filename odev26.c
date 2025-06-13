#include <stdio.h>
#include <stdlib.h>
// **string kutuphanesi kullanmadan strcmp yazma**

int my_strcmp(char a[],char b[])
{
	int i=0,x,k=0,uzunluk=0;
	while(1)
	{
		if(a[k]=='\0')
		{
			break;
		}
		uzunluk++;
		k++;
	}
	int q=0,uzunlukb=0;
	while(1)
	{
		if(b[q]=='\0')
		{
			break;
		}
		uzunlukb++;
		q++;
	}

}
    if(uzunluk!=uzunlukb)
{
	return -1;
}
else 
{
	for(i=0;i<uzunluk;i++)
	{
		if(a[i]==b[i]) // 0 donmeli
		{
			x=0;
		}
		else // -1 donmeli
		{
			return -1;
		}
	}
	return x;
}

int main() 
{
	char a[]="yagmur inci"; //strlen()
	char b[]="yagmur inci";
	int k=my_strcmp(a,b);
	printf("%d",k);//iki string esit ise 0 donmeli,esit degilse 0 dan farkli bir deger donmeli
}
