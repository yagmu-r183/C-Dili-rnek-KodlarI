#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int dizi1[2][2],dizi2[2][2],i,j,toplamdizi[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		   printf("dizi1[%d][%d] gir:",i,j);
		   scanf("%d",&dizi1[i][j]);
		    
		}
		
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		   printf("dizi2[%d][%d] gir:",i,j);
		   scanf("%d",&dizi2[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			toplamdizi[i][j]=dizi1[i][j]+dizi2[i][j];
			printf("toplam[%d][%d]=%d\n",i,j,toplamdizi[i][j]);
		}
	}
	
	
	return 0;
}
