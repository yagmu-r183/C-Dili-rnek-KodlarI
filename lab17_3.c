#include <stdio.h>
#include <stdlib.h>

int fun2(int **p)
{
	int b=8;
	*p=&b;
	printf("%d ",**p);
}

int main() 
{
	int a=10,*p=&a;
	fun2(&p);
	printf("%d",*p);
	return 0;
}
