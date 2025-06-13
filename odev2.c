#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,j,boy,yildiz=1;
	printf("boy degeri giriniz:");
	scanf("%d",&boy);
	int bosluk; 
	bosluk=boy-1;
	for(i=0;i<boy;i++)
	{
		for(j=0;j<bosluk;j++)
    	{
	    	printf(" ");
    	}
	    for(j=0;j<yildiz;j++)
     	{
		    printf("*");
    	}
    	printf("\n");
    	yildiz+=2;
		bosluk--; 
	}

	
	
	return 0;
}
