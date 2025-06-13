#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a,b,c;
	char *p=0;//1
	int *q=0;//4
	double *s=0;//8
	a=(p+3);
	b=(q+2);
	c=(s+1);
	printf("%d  %d  %d",a,b,c);
	return 0;
}
