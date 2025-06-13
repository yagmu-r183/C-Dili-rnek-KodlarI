#include <stdio.h>
#include <stdlib.h>


int main() 
{
	float yaricap,alan=1,cevre=1,r;
	int islemturu;
	
	printf("islem turu gir:");
	scanf("%d",&islemturu);
	    
	printf("dairenin yaricapini gir:");
	scanf("%f",&yaricap);
	r=yaricap;
	
	
	if(islemturu==1)
	{
		cevre=2*3.14*r;
		printf("cevre: %.2f",cevre);
	}
	
    else if(islemturu==2)
	{
		alan=3.14*r*r;
		printf("alan: %.2f",alan);
	}
	
	else
	{
		printf("hatali giris");
	}
	
	
	return 0;
}
