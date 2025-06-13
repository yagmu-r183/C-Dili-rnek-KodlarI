#include <stdio.h>
#include <stdlib.h>

int x;
void autodepolamasinifi()
{
	printf("auto sinifi calistiriliyor\n");
	auto int a=32;
	printf("auto a=%d\n",a);
}
void registerdepolamasinifi()
{
	printf("register calisiyor\n");
	register char b='g';
	printf("register b=%d\n",b);
}
void externdepolamasinifi()
{
	printf("extern depolama calisiyor\n");
	extern int x;
	printf("extern x:%d\n",x);
	x=2;
	printf("yeni extern x:%d\n",x);
}
void staticsiniflandirmasinifi()
{
	int i=0;
	printf("static calisiyor:\n");
	for(i=0;i<5;i++)
	{
		static int y=5;
		int p=10;
		y++;
		p++;
		printf("y nin %d. interasyondaki degeri: %d\n",i,y);
		printf("p nin %d. interasyondaki degeri: %d\n",i,p);
		
	}
}

int main() 
{
	autodepolamasinifi();
	registerdepolamasinifi();
	externdepolamasinifi();
	staticsiniflandirmasinifi();
	return 0;
}
