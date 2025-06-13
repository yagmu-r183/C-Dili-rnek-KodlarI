#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int dizi[4][3]={67,76,55,34,79,76,56,68,57,66,89,65},i,j,a,b;
	float ort[4],toplam=0.0,enb=0.0;
	for(i=0;i<4;i++)
	{
		toplam=0.0;
		ort[i]=0.0;
		for(j=0;j<3;j++)
		{
			printf("dizi[%d][%d]=%d\n",i,j,dizi[i][j]);
			toplam=toplam+dizi[i][j];
			ort[i]=toplam/3;
		}
		printf("%d. ogrencinin ortalamasi:%.2f\n",i+1,ort[i]);
		if(ort[i]>enb)
		{
			enb=ort[i];
		}
	}	
	printf("\nmaximum ortalama %d.ogrenciye ait ve %.2f dir",i,enb);
}
    
   
