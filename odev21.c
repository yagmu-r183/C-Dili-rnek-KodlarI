#include <stdio.h>
#include <stdlib.h> 

// cok boyutlu array

void bastir(int matrisimiz[][4],int size)//2.yi girip 1. yi almaliyiz
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" %d",matrisimiz[i][j]);
		}
		printf("\n");
	}
}

int main() 
{
	int i,j,matris[3][4];
	printf("matrisi doldurunuz:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d\n",&matris[i][j]);
		}
	}
     bastir (matris,3);
}
 




