#include <stdio.h>
#include <stdlib.h>

/*void degerdegistir(int a,int b)
{
	int gecici=a;
	a=b;
	b=gecici;
	printf("a:%d  b:%d\n",a,b);
}

int main() 
{
	int x=5,y=10;
	degerdegistir(x,y);
	printf("x:%d  y:%d",x,y);
	return 0;
}*/

void degerdegistir(int *a,int *b)
{
	int gecici=*a;
	*a=*b;
	*b=gecici;
}

int main()
{
	int  x=5,y=10;
	degerdegistir(&x,&y);
	printf("x:%d y:%d",x,y);
}
