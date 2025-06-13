#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int kilo,i,j,dizi[10][2];
	float toplamboy=0,toplamkilo=0;
	for (i=0;i<10;i++)
	{
		for(j=0;j<1;j++)
    	{
    		printf("%d. ogrencinin kilosunu girin:",i+1);
    		scanf("%d",&dizi[i][j]);	
    	}
    	for(j=1;j<2;j++)
    	{
    		printf("%d. ogrencini boyunu girin:",i+1);
	    	scanf("%d",&dizi[i][j]);
		}
	}
	
	
	for(i=0;i<10;i++)
	{
		toplamkilo+=dizi[i][0];
	}
	for(i=0;i<10;i++)
	{
		toplamboy+=dizi[i][1];
	}
	printf("boy ortalamasi:%.2f\n",toplamboy/10);
	printf("kilo ortalamasi:%.2f",toplamkilo/10);
	
	
	return 0;
}
