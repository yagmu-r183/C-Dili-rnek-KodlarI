#include <stdio.h>
#include <stdlib.h>


int main() 
{
	double *m,**k,myarray[5]={1.0,2.0,3.0,4.0,5.0};
	m=myarray;
	printf("%.1f\n",*(m+1));
	*(m+3)+=3.86;//7.86
	m+=2;//2.0
	printf("%.1f\n",*(m+1));
	m=&myarray[3];
	k=&m;
	printf("%.1f\n",*(*(k)-1));
	printf("%p\n",*k); //??
	m=m-1;
	printf("%p",m);
	return 0;
}
