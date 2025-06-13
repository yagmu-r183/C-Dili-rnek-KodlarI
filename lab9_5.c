#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() 
{
	int i,j,a=1,n,x,b;
	float toplam=0;
	printf("son terimi gir:");
	scanf("%d",&n);
	printf("x degerini gir:");
	scanf("%d",&x);
	
	
	for(i=0;i<n;i++)
	{   
		for(j=1;j<=i;j++)
	
		{
			a=a*j;
		}
	    b=pow(x,i/a);               
		toplam=toplam+b;
	}
	printf("toplam:%.3f",toplam);
	return 0;
}
