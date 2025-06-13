#include <stdio.h>
#include <stdlib.h>
//**guzel soru**
int main()
{
	int miktar,yuz,elli,yirmi,on;
	printf("cekmek istediginiz para miktari:");
	scanf("%d",&miktar);
	if(miktar%10!=0)
	{
		printf("en kucuk 10 TL lik banknot mevcut..!");
	}
    else if(miktar>=100)
	{
		yuz=miktar/100;
		miktar=miktar%100;
		printf("%d tane 100 luk banknot var\n",yuz);
		if(miktar>=50)
	   {
		    elli=miktar/50;
	    	miktar-=elli*50;
	    	printf("%d tane 50 lik banknot var\n",elli);
	   }
	   if (miktar>=20)
       {
	    	yirmi=miktar/20;
	    	miktar-=yirmi*20;
	    	printf("%d tane 20 lik banknot var\n",yirmi);
	   }
	    if(miktar>=10)
	   {
	    	on=miktar/10;
    		printf("%d tane 10 luk banknot var",on);
	   }
	   }
	   	
}

